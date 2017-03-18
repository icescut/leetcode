/***********************************************************************************
 * 66. Plus One
 * Given a non-negative number represented as an array of digits, plus one to
 * the number.
 * The digits are stored such that the most significant digit is at the head
 * of the list.
 * Alan Liang, icescut1986@hotmail.com
 * 从低位往高位判断，如果该位加1大于9，则该位为0，否则该位自增1，并跳出循环
 * 复杂度O(n)
***********************************************************************************/
/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function(digits) {
    for(var i = digits.length - 1; i >= 0; --i) {
        if(digits[i] + 1 > 9) {
            digits[i] = 0;
        } else {
            digits[i] += 1;
            break;
        }
    }
    if(digits[0] === 0) {
        digits.unshift(1);
    }
    return digits;
};
