// valid parenthesis ->{[()]} ---> Balanced , {[))} ---> unbalanced . to return true for balanced and false for unbalanced
#include <bits/stdc++.h>
using namespace std;
bool validparenthesis(string str)
{
    stack<char> st;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if (ch == '(' || ch == '[' || ch == '{')
        {
            st.push(ch);
        }
        else
        {
            if (!st.empty())
            {
                char top = st.top();
                if (top == '(' && ch == ')' || top == '[' && ch == ']' || top == '{' && ch == '}')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    if (st.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string str ;
    cout<<"enter the string : "<<endl;
    cin>>str;
    
    if (validparenthesis(str)) {
        cout << "Balanced" << endl;
    } else {
        cout << "Unbalanced" << endl;
    }

    return 0;
}