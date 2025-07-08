#include <bits/stdc++.h>
using namespace std;

//Maximum nesting of valid parentheses
int maxDepth(string s)
{
    int maxcount = 0;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == '(')
        {
            count += 1;
        }
        maxcount = max(maxcount, count);
        if (ch == ')')
        {
            count -= 1;
        }
    }
    return maxcount;
}
int main()
{
    string s = "(1) + ((2 + 3) / 1) -  (((9)))";
    int maxdepth = maxDepth(s);
    cout<<"the nesting depth of s: "<<maxdepth;
    return 0;
}