/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
    s = s.toLowerCase().replace(/( )[^a-zA-Z0-9]+/g, '').replace( /[^a-zA-Z0-9]/g, '');
    for(let i = 0; i < s.length/2; i++){
        if(s[i] != s[s.length-i-1]) return false;
    }
    return true;
};
//https://leetcode.com/problems/valid-palindrome/