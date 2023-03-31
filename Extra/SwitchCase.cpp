#include <iostream>
using namespace std;
int main()
{
    int Rs100, Rs50, Rs20, Rs1, a;
    cin >> a;

    switch (1)
    {
    case 1:
        Rs100 = a / 100;
        a = a % 100;
        cout << "Rs100:" << Rs100 << endl;
        /* code */

    case 2:
        Rs50 = a / 50;
        a = a % 50;
        cout << "Rs50:" << Rs50 << endl;
        /* code */

    case 3:
        Rs20 = a / 20;
        a = a % 20;
        cout << "Rs20:" << Rs20 << endl;
        /* code */

    case 4:
        Rs1 = a / 1;
        a = a % 1;
        cout << "Rs1:" << Rs1;
        /* code */
    }
    return 0;
}