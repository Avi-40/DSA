#include <iostream>
using namespace std;

int BinarySearch(int k)
{
    int s = 0;
    int e = k;

    int mid = s + (e - s) / 2;
    int ans = 0;

    while (s <= e)
    {
        int sq = mid * mid;

        if (sq == k)
        {
            return mid;
        }
        else if (sq < k)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (sq > k)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }

    return ans;
}
double preci(int n, int p, int t)
{

    double fact = 1;
    double ans = t;
    for (int i = 0; i < p; i++)
    {
        fact = fact / 10;

        for (double j = ans; j * j < n; j = j + fact)
        {

            ans = j;
        }
    }
    return ans;
}
int main()
{
    int qu = 27;
    int temp = BinarySearch(qu);
    cout << "Answer is " << preci(qu, 3, temp);

    return 0;
}