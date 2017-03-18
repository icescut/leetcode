/***********************************************************************************
 * 14 Longest Common Prefix
 * Write a function to find the longest common prefix string amongst
 * an array of strings.
 * Alan Liang, icescut1986@hotmail.com
***********************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.empty()) return "";
        int i, j;
        //string r = "";
        for (i = 0; i < strs[0].size(); ++i)
        {
            for (j = 1; j < strs.size(); ++j)
            {
                //no need to compare \0
                if (strs[j][i] != strs[0][i]) return strs[0].substr(0, i);
            }
        }
        return strs[0].substr(0, i);
    }
};

int main()
{
    vector<string> strs =
    {
        "hello",
        "hill",
        "hot"
    };

    vector<string> strs2 =
    {
        "hello",
        "hello",
        "hello"
    };

    vector<string> strs3 =
    {
        "hello",
        "   ",
        "hello"
    };

    vector<string> strs4 =
    {
        "hello",
        "",
        "hello"
    };

    vector<string> strs5 =
    {
        ""
    };

    Solution s;
    cout << s.longestCommonPrefix(strs) << endl;
    cout << s.longestCommonPrefix(strs2) << endl;
    cout << s.longestCommonPrefix(strs3) << endl;
    cout << s.longestCommonPrefix(strs4) << endl;
    cout << s.longestCommonPrefix(strs5) << endl;
    return 0;
}
