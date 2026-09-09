// Last updated: 09/09/2026, 21:26:13
/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    let result = [];
    for(let i=0;i<arr.length;i++){
        if(fn(arr[i], i)){
            result.push(arr[i]);
        }
    }
    return result;
};



