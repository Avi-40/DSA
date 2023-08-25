#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int a;
    int b;
    void fun()
    {
        cout << " Class A" << endl;
    }
};
class D
{
public:
    bool i;
    void fun()
    {
        cout << " Class D" << endl;
    }
};
class B : public A
{
public:
    string l;
    void fun2()
    {
        cout << " Class B" << endl;
    }
};
class C : public A, public D
{
public:
    char k;
    void fun3()
    {
        cout << " Class C" << endl;
    }
};

int main()
{
    A obj1;
    B obj2;
    C obj3;
    D obj4;
    cout << obj1.a << endl;
    cout << obj2.a << endl;
    cout << obj3.i << endl;
    cout << obj4.i << endl;
    // obj1.fun1();
    obj3.D::fun();
}