#include <bits/stdc++.h>
using namespace std;
bool checkpali(string str)
{
    int s = 0;
    int e = str.size() - 1;
    while (s <= e)
    {
        if (str[s] != str[e])
        {
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}
bool valid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= 0 && ch <= 9))
    {
        return 1;
    }
    return 0;
}
bool isPali(string str)
{
    string temp = "";
    for (int j = 0; j < str.size(); j++)
    {
        if (valid(str[j]))
        {

            temp.push_back(tolower(str[j]));
        }
    } 
    
    return checkpali(temp);
}
int main()
{
    string s = "Noon";
    cout << isPali(s);
}