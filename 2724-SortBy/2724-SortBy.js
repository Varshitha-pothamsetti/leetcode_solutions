// Last updated: 09/09/2026, 21:25:07
/**
 * @param {Array} arr
 * @param {Function} fn
 * @return {Array}
 */
var sortBy = function(arr, fn) {
    return arr.sort((a,b) => fn(a) - fn(b));
};