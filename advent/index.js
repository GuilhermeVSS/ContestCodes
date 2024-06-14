const fs = require('fs');

const file = fs.readFileSync('./input.txt');

const files = file.toString().split('\n');

const numericMap = {
    1: 1,
    2:2,
    3:3,
    4:4,
    5:5,
    6:6,
    7:7,
    8:8,
    9:9
}

const stringMap = {
    one: 1,
    two:2,
    three:3,
    four:4,
    five:5,
    six:6,
    seven:7,
    eight:8,
    nine:9
}

function checkOnThebegin(str){
    const length = str.length;
    for(const key in stringMap){
        if(str[0] == key){
            return stringMap[key];
        }
    }

    for(const key in stringMap){
        if(str.substring(1, key.length) == key){
            return stringMap[key];
        }
    }
}

let frase = 'two';

console.log(frase.substring(frase.length - 4, frase.length));

// console.log(files.slice(0,10));
// let ans = 0;
// for(const file of files){
//     let numbers = file.match(/\d+/g).join('');
//     // console.log(numbers);
//     if(numbers.length == 1){
//         // console.log("primeiro caso")
//         numbers = Number(numbers.concat(numbers));
//         // console.log(numbers);
//     } else {
//         // console.log("segundo caso")
//         // console.log(numbers[0], numbers[numbers.length-1])
//         numbers = Number(`${numbers[0]}${numbers[numbers.length - 1]}`);
//         // console.log(numbers);
//     }
//     ans += parseInt(numbers);
// }

// console.log(ans);

