#include <bits/stdc++.h>
using namespace std;

int power(int n, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else if (b == 1)
    {
        return n;
    }

    int ans = power(n, b / 2);
    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return ans * ans * n;
    }
}
int main()
{

    int n = 5;
    int b = 2;
    cout << power(n, b) << endl;
}