#include <bits/stdc++.h>
#include <string>

string removeDuplicates(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i + 1])
        {
            s.erase(i, i + 1);
            i = 0;
        }
    }
    return s;
}

int main()
{
    string s = "abbaca";
    cout << removeDuplicates(s);
}