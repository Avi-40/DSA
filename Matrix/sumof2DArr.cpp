#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[3][3] = {{1, 2, 3}, {10, 10, 6}, {7, 8, 9}};
    int ans = -1;
    for (int i = 0; i < 3; i++)
    {
        int count = 0;
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j];

            count += arr[i][j];
        }
        if (count > ans)
        {
            ans = count;
        }
        cout << endl;
        cout << "sum: " << count << endl;
    }
    cout << "Max value of row-wise sum " << ans;
}