function solve(board){
    const boardSize = board.length;
    const obstacle = "*";
    const box = "#";
    const empty = "-"

    for(let line = 0; line < boardSize; line++){
        let lastObstacle = boardSize;
        for(let col = boardSize-1; col >= 0; col--){
            if(board[line][col] == box){
                board[line][lastObstacle-1] = board[line][col];
                if(col != lastObstacle-1) board[line][col] = empty;
                lastObstacle--;
            }
            else if(board[line][col] == obstacle){
                lastObstacle = col;
            }
        }
    }

    for(let col = 0; col < boardSize; col++){
       let lastObstacle = boardSize; 
        for(let line = boardSize - 1; line >= 0; line--){
           if(board[line][col] == box){
               board[lastObstacle-1][col] = board[line][col];
               if(line != lastObstacle -1) board[line][col] = empty;
               lastObstacle--;
            }
           else if(board[line][col] == obstacle){
               lastObstacle = line;
            }
        }
    }
    return board;
}


const board = [
    ["-", "#", "-", "#"],
    ["#", "-", "*", "#"],
    ["-", "-", "-", "-"],
    ["#", "-", "-", "#"],
];

console.log(solve(board));