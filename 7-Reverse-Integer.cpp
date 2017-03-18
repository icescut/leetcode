/***********************************************************************************
 * 7 Reverse Integer
 * Reverse digits of an integer.
 *
 * Example1: x = 123, return 321
 * Example2: x = -123, return -321
 * Alan Liang, icescut1986@hotmail.com
 * 通过求模得到最小的位数，将其放在第一位，然后对剩下的位数做同样的操作。
 * 复杂度为Ｏ(n)
***********************************************************************************/
#include <iostream>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        long long r = 0;
        do
        {
            r = r * 10 + x % 10;
        } while (x /= 10);
        return (r > INT_MAX || r < INT_MIN) ? 0 : r;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    cout << s.reverse(1234) << endl;
    cout << s.reverse(-1234) << endl;
    cout << s.reverse(0) << endl;
    cout << s.reverse(1) << endl;
    cout << s.reverse(INT_MAX) << endl;
    return 0;
}
