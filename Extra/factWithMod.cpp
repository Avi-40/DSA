#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 212;
    int long long fact = 1;
    int m = 1000000007;
    for (int i = 1; i <= n; i++)
    {
        fact = (fact * i) % m;
    }
    cout << fact;
}