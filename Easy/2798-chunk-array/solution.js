// ╔══════════════════════════════════════════════╗
//   Problem   : Chunk Array
//   Difficulty: Easy
//   Tags      : N/A
//   Language  : javascript
//   Solved on : 2026-10-27
//   URL       : https://leetcode.com/problems/chunk-array/
// ╚══════════════════════════════════════════════╝

/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array}
 */
var chunk = function(arr, size) {
    const ans=[];
    for(let i=0; i<arr.length; i=i+size ){
        ans.push(arr.slice(i, i+size));
    }   
    return ans; 
};
