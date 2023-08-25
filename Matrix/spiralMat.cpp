#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[3][3] = {{1, 2, 3}, {5, 6, 7}, {9, 10, 11}};
    int count = 0;
    int total = 9;
    int srow = 0;
    int scol = 0;
    int erow = 2;
    int ecol = 2;
    while (count < total)
    {
        for (int i = scol; i < ecol; i++ && count < total)
        {
            cout << arr[srow][i];
            count++;
        }
        srow++;
        for (int i = srow; i < erow; i++ && count < total)
        {
            cout << arr[i][ecol];
            count++;
        }
        ecol--;
        for (int i = ecol; i < scol; i-- && count < total)
        {
            cout << arr[erow][i];
            count++;
        }
        erow--;
        for (int i = erow; i < srow; i-- && count < total)
        {
            cout << arr[i][scol];
            count++;
        }
        scol++;
    }
}