
#include <iostream>
using namespace std;
int main()
{

    int n, num;
    cout << "Give an integer you want to reverse: ";
    cin >> n;
    cout << "Reversed integer: ";
    while (n != 0)
    {
        num = n % 10;
        cout << num;
        n = n / 10;
    }

    return 0;
}