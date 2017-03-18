/***********************************************************************************
 * 66. Plus One
 * Given a non-negative number represented as an array of digits, plus one to
 * the number.
 * The digits are stored such that the most significant digit is at the head
 * of the list.
 * Alan Liang, icescut1986@hotmail.com
***********************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        for(int i = digits.size() - 1; i >= 0; --i)
        {
            if (digits[i] + 1 > 9)
                digits[i] = 0;
            else
            {
                digits[i] += 1;
                break;
            }
        }
        if (digits[0] == 0)
            digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main()
{

    Solution s;
    vector<int> digits = {1, 2, 3};
    s.plusOne(digits);
    for(auto i : digits)
    {
        cout << i << " ";
    }
    cout << endl;
    vector<int> digits2 = {9, 9, 9};
    s.plusOne(digits2);
    for(auto i : digits2)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
