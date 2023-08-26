#include <bits/stdc++.h>
using namespace std;

class person{
    public:
    //Making it pure virtual == abstract class
    virtual void show()=0;
};

class boy:public person{
    public:
    void show(){
        cout<<"blue bun"<<endl;
    }
};

class girl:public person{
    public:
    void show(){
        cout<<"pink bun"<<endl;
    }
};

int main(){

    person *ptr1 = new boy;
    person *ptr2 = new girl;
    
    ptr1->show();
    ptr2->show();

    return 0;

}