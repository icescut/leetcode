/***********************************************************************************
 * 8 String to Integer
 * Reverse digits of an integer.
 *
 * Example1: x = 123, return 321
 * Example2: x = -123, return -321
 * Alan Liang, icescut1986@hotmail.com
 * 从左到右判断字符串是否可转换为相应的数值。
 * 复杂度O(n)
***********************************************************************************/
#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int myAtoi(string str)
    {
        auto sz = str.size();
        if (sz == 0) return 0;
        long long r = 0;
        int i = 0, s = 1;
        //去除空白符
        while (i < sz && str[i] == ' ')
        {
            ++i;
        }
        //是否有负号
        if (i < sz && str[i] == '-')
        {
            s = -1;
            ++i;
        } else if (i < sz && str[i] == '+')
        {
            ++i;
        }
        //符合０到９之间
        while (i < sz && str[i] >= '0' && str[i] <= '9')
        {
            r = r * 10 + (str[i++] - '0');
            if(r * s > INT_MAX)
            {
                return INT_MAX;
            } else if(r * s < INT_MIN)
            {
                return INT_MIN;
            }
        }
        return r * s;
    }
};

int main()
{
    Solution s;
    cout << s.myAtoi("2147483648") << endl;
    cout << s.myAtoi("9223372036854775809") << endl;
    cout << s.myAtoi("010") << endl;
    cout << s.myAtoi("123") << endl;
    cout << s.myAtoi("  123  ") << endl;
    cout << s.myAtoi("  -123") << endl;
    cout << s.myAtoi("123.45") << endl;
    cout << s.myAtoi("-123456789123") << endl;
    cout << s.myAtoi("123abc") << endl;
}
