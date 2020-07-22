#include "bits/stdc++.h"
 
using namespace std;
 
const int MAXN = 2*(1e5 +10);
int INF = 1e8+10;
 
vector<int> adj[MAXN];
int vis[MAXN];
int n, m;
 
int dfs(int x){
    if(vis[x]) return adj[x].size();
    vis[x] = true;
    int aux = adj[x].size();
    int ans;
    for (auto w : adj[x]){
        ans = dfs(w);
        if(ans != 2) aux = -INF;
    }
    return aux;
}
 
int main (){
    scanf("%d %d", &n, &m);
    for(int i = 0; i < m; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int cont = 0;
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            if(dfs(i) == 2){
                cont++;
            }
                
        }
    }
    cout<<cont<<endl;
    
    return 0;
}