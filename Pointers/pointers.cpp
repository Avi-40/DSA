/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    int *p = &n;
    cout << *p << " - " << p << endl;
    int *q = p;
    cout << *q << " - " << *p;
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int firstvalue = 5, secondvalue = 15;
    char thirdvalue = 'a';
    int *p1, *p2;
    char *p3;
    p1 = &firstvalue;
    p2 = &secondvalue;
    p3 = &thirdvalue;
    *p1 = 10;
    *p2 = *p1; // value pointed to by p2 = value pointed to by p1
    p1 = p2;   // p1 = p2 (value of pointer is copied)
    cout << "firstvalue is " << firstvalue << "-" << *p1 << endl;
    cout << "secondvalue is " << secondvalue << "-" << *p2 << endl;
    *p1 = 20;  // value pointed to by p1 = 20
    *p3 = 'b'; // value pointed to by p3 = ‘b ’
    cout << "firstvalue is " << firstvalue << "-" << *p1 << endl;
    cout << "secondvalue is " << secondvalue << "-" << *p2 << endl;
    cout << "thirdvalue is " << thirdvalue << "-" << *p3 << endl;
    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3] = {1, 2, 3};
    int i = 2;
    cout << i[arr] << endl;
}