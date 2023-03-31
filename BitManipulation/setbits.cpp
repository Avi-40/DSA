#include <iostream>
using namespace std;

int ap(int a, int b)
{
    int count;
    count = 0;
    while (a != 0 || b != 0)
    {
        if (a & 1)
        {
            count++;
        }
        if (b & 1)
        {
            count++;
        }
        a = a >> 1;
        b = b >> 1;
    }
    return (count);
}
int main()
{
    int a, b;
    cin >> a >> b;

    cout << ap(a, b);
}