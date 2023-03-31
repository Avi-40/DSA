#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int n, bit, i;
    double ans;
    cout << "Give Input: ";
    cin >> n;
    cout << "Output: ";
    i = 0;
    while (n != 0)
    {
        bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    cout << ans;

    return 0;
}