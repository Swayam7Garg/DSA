// valid anagram
#include <bits/stdc++.h>
using namespace std;

bool validanagram(string s, string t)
{
    // Anagram - a word, phrase, or name formed by rearranging the letters of another word
    if (s.length() != t.length())
    {
        return false;
    }
    vector<int> count(26, 0); // array count to check the count
    for (int i = 0; i < s.length(); i++)
    {
        count[s.at(i) - 'a']++; // for a character increment the occurence if it exist in s
        count[t.at(i) - 'a']--; // for a character decrement the occurence if it exist in t
    }

    // iterating through the array now
    for (int i = 0; i < count.size(); i++)
    {
        if (count[i] != 0)//if the count[i] is not equal to 0 then the strings are not anagram
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s = "google";
    string t = "logoge";
    if (validanagram(s, t))
    {
        cout << "The given 2 strings are anagram of each other" << endl;
    }
    else
    {
        cout << "The given 2 strings are not anagram of each other" << endl;
    }
    return 0;
}