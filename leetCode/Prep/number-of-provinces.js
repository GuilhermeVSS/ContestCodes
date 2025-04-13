    /**
 * @param {number[][]} isConnected
 * @return {number}
 */
var findCircleNum = function(isConnected) {
    let n = isConnected.length;
    let visited = new Array(n).fill(false);
    
    function dfs(city){
        if(visited[city]) return;
        visited[city] = true;
        const adj = isConnected[city];
        for(let i = 0; i < adj.length; i++){
            if(adj[i] == 1) dfs(i);
        }
        return;
    }

    let provinces = 0;
    for(let i = 0; i< n; i++){
        if(!visited[i]){
            provinces++;
            dfs(i);
        }
    }

    return provinces;
};