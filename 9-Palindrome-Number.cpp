/***********************************************************************************
 * 9 Palindrome Number
 * Determine whether an integer is a palindrome. Do this without extra space.
 * Alan Liang, icescut1986@hotmail.com
***********************************************************************************/
#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0 || ( x != 0 && x % 10 == 0)) return false;
        int y = 0;
        do
        {
            y = y * 10 + x % 10;
        } while ( x > y && ( x /= 10));
        return x == y || x == y / 10;
    }
};

int main()
{
    Solution s;
    cout << boolalpha << s.isPalindrome(121) << endl;
    cout << boolalpha << s.isPalindrome(1221) << endl;
    cout << boolalpha << s.isPalindrome(0) << endl;
    cout << boolalpha << s.isPalindrome(-1) << endl;
    cout << boolalpha << s.isPalindrome(INT_MAX) << endl;
}
