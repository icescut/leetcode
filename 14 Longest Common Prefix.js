/***********************************************************************************
 * 14 Longest Common Prefix
 * Write a function to find the longest common prefix string amongst
 * an array of strings.
 * Alan Liang, icescut1986@hotmail.com
 * 以第一个数组元素为基础判断剩下的元素在相同位置上的字符是否一致
 * 复杂度O(n)
***********************************************************************************/
/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
    var len = strs.length;
    if(len === 0) return "";
    var r = [];
    //遍历第一个字符串元素的所有字符
    for(var i = 0, l1 = strs[0].length; i < l1; ++i) {
        //遍历第二个到最后一个字符串的相同位置
        for(var j = 1; j < len; ++j) {
            if(strs[j][i] !== strs[0][i]) return strs[0].substr(0, i);
        }
    }
    return strs[0];
};