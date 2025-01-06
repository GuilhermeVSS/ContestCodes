/**
 * @param {string} str1
 * @param {string} str2
 * @return {string}
 */


function solve(str){
    let last_position = 0;
    let aux = ""
    let indexOf;
    let position = 1;
    let myRegex =  new RegExp(`${str[0]}`, "gi");
    
    while(str.replace(myRegex,"") != ""){
        console.log("Regex", myRegex);
        aux = str.substring(last_position+1, str.length);
        last_position = position;
        indexOf = aux.indexOf(str[0]);
        position = indexOf != -1? (str.length - aux.length) + indexOf : str.length;
        console.log(position, last_position)
        //console.log(str.substring(0, position));
        myRegex = new RegExp(`${str.substring(0, position)}`, "gi");
    }

    return str.substring(0, position);
 }

var gcdOfStrings = function(str1, str2) {
    if(str1.length > str2.length){
        let myRegex =  new RegExp(`${str2}`, "g");
        if(str1.replace(myRegex,"") ==""){
            return str2;
        }
    } else {
        let myRegex =  new RegExp(`${str1}`, "g");
        if(str2.replace(myRegex,"") ==""){
            return str1;
        }
    }
    
    const t1 = solve(str1);
    console.log("t1 ", t1);
    const t2 = solve(str2);
    console.log("t2 ", t2)
    return t1 == t2? t1 : "";
};

gcdOfStrings("ABABAB","ABAB");

//console.log("AAACCC".substring(0, 6));