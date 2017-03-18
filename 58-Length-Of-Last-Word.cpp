/***********************************************************************************
 * 58. Length of Last Word
 * Given a string s consists of upper/lower-case alphabets and empty space
 * characters ' ', return the length of last word in the string.
 * If the last word does not exist, return 0.
 * Alan Liang, icescut1986@hotmail.com
***********************************************************************************/
#include <iostream>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int i = s.size() - 1, r = 0;
        while(s[i] == ' ')
            --i;
        while(i >= 0 && s[i] != ' ')
        {
            --i;
            ++r;
        }
        return r;
    }
};

int main()
{
    Solution s;
    cout << s.lengthOfLastWord(" hello world") << endl;
    cout << s.lengthOfLastWord(" hello world  ") << endl;
    cout << s.lengthOfLastWord("h") << endl;
    cout << s.lengthOfLastWord("h ") << endl;
    cout << s.lengthOfLastWord(" ") << endl;
    cout << s.lengthOfLastWord("") << endl;
    return 0;
}
