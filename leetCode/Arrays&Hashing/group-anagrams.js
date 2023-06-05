/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function (strs) {
    let aux = [...strs];
    const map = {};
    aux.map((data, key) => {
        data = data.split('').sort().join('');
        map[data] ? map[data].push(strs[key]) : map[data] = [strs[key]];
    });
    const solution = []
    for (const key in map) {
        solution.push(map[key]);
    }
    return solution;
};

//https://leetcode.com/problems/group-anagrams/