#include <bits/stdc++.h>
using namespace std;

int sum(int n, int ans)
{
    if (n == 0)
    {
        return 0;
    }

    ans = n + sum(n - 1, ans);
    cout << n << endl;

    return ans;
}
int main()
{

    int n = 5;
    int ans = 0;
    cout << sum(n, ans) << endl;
}