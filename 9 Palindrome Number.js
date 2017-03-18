/***********************************************************************************
 * 9 Palindrome Number
 * Determine whether an integer is a palindrome. Do this without extra space.
 * Alan Liang, icescut1986@hotmail.com
 * 不断从右边减少数组的规模，使用一个变量保存从右往左的部分。当两部分规模一样是判断。
 *　复杂度O(n)
***********************************************************************************/
/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    //不能小于０，不能整除１０
    if (x < 0 || ( x !== 0 && x % 10 === 0)) return false;
    var y = 0;
    do
    {
        y = y * 10 + x % 10;
        x = parseInt(x / 10);
    } while ( x > y && (x !== 0));
    return x === y || x === parseInt(y / 10);
};
