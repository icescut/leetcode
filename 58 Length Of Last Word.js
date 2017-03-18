/***********************************************************************************
 * 58. Length of Last Word
 * Given a string s consists of upper/lower-case alphabets and empty space
 * characters ' ', return the length of last word in the string.
 * If the last word does not exist, return 0.
 * Alan Liang, icescut1986@hotmail.com
 * 从后往前判断是否空白符
 * 复杂度O(n)
***********************************************************************************/
/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    var l = s.length-1,
        r = 0;
    while(s[l] === ' ') --l;
    while(l >= 0 && s[l] != ' ') {
        --l;
        ++r;
    }
    return r;
};