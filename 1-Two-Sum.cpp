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
*********************************************************************/
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> h;
        vector<int> r;
        int a, sz = nums.size();
        for (int i = 0; i < sz; ++ i) {
            a = target - nums[i];
            if (h.find(a) != h.end()) {
                r.push_back(h[a]);
                r.push_back(i);
                break;
            }
            h[nums[i]] = i;
        }
        return r;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {2, 7, 11, 15};
    vector<int> res = s.twoSum(nums, 9);

    for(auto i = res.rbegin(); i != res.rend(); ++i)
    {
        cout << *i << "\t";
    }
    cout << endl;
}
