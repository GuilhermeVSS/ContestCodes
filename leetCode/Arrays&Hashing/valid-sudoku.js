/**
 * @param {character[][]} board
 * @return {boolean}
 */
var isValidSudoku = function(board) {
    for(let i = 0; i < board.length; i++){
        if(!validateLine(board, i)) return false;
        if(!validateColumn(board, i)) return false;
    }
    for(let i = 0; i <= 6; i += 3){
        for(let j = 0; j <= 6; j += 3){
            if(!validateSquare(board, i, j)) return false;
        }
    }
    return true;
}

function validateLine(board, line){
    const map = {};
    for(let i = 0; i < board.length; i ++){
        if(board[line][i] != '.' && map[board[line][i]]){
            return false;
        } else if(board[line][i] != '.') {
            map[board[line][i]] = true;
        }
    }
    return true;
}

function validateColumn(board, column){
    const map = {};
    for(let i = 0; i < board.length; i ++){
        if(board[i][column] != '.' && map[board[i][column]]){
            return false;
        } else if(board[i][column] != '.'){
            map[board[i][column]] = true;
        }
    }
    return true;
}

function validateSquare(board, line, column){
    const map = {};
    for(let i = line; i < line + 3; i++){
        for(let j = column; j < column + 3; j++){
            if(board[i][j] != '.' && map[board[i][j]]){
                return false;
            }else if(board[i][j] != '.'){
                map[board[i][j]] = true;
            }
        }
    }
    return true;
}

//https://leetcode.com/problems/valid-sudoku/