/********************************************************************
 * 1 Two Sum
 * Given an array of integers, return indices of the two numbers such that they add up to a specific target.
 *
 * You may assume that each input would have exactly one solution.
 *
 * Example:
 * Given nums = [2, 7, 11, 15], target = 9,
 *
 * Because nums[0] + nums[1] = 2 + 7 = 9,
 * return [0, 1].
 * Alan Liang, icescut1986@hotmail.com
 * 从数组第一个元素开始到最后一个元素，用target减去当前元素，寻找另一半是否在数组中。
 * 复杂度为O(n)
*********************************************************************/
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    var n,
        j,
        r = [];
    for(var i = 0, len = nums.length; i < len; ++i) {
        n = target - nums[i];
        j = nums.indexOf(n);
        if(j != -1 && i != j) {
            r.push(i, j);
            break;
        }
    }
    return r;
};