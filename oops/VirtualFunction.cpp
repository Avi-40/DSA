#include <bits/stdc++.h>
using namespace std;

class base{
    public:
    //Making it virtual
    /*When you declare a function as a virtual function in C++, 
    you are telling the compiler that this function can be overridden by derived classes*/
    virtual void show(){
        cout<<"Base class function used"<<endl;
    }
    //virtual destructor destroys both base and derived
    virtual ~base(){
        cout<<"Base Class Dest."<<endl;
    }
};

class derived1:public base{
    public:
    void show(){
        cout<<"D1 class function used"<<endl;
    }
};

class derived2:public base{
    public:
    void show(){
        cout<<"D2 class function used"<<endl;
    }
    ~derived2(){
        cout<<"Derived2 Class Dest."<<endl;
    }
};

int main(){

    base *ptr1 = new derived1;
    base *ptr2 = new derived2;
    
    ptr1->show();
    ptr2->show();

    return 0;

}