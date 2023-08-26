#include <bits/stdc++.h>
using namespace std;

class base{
    private:
    int a;
    int b;

    public:
    base(){
        a=5; b=5;
    }
    //static member
    static int stat;

    //static member func. 
    //they can only acces and perform actions only on static mem variables 
    static int getStat(){
        stat++;
        return stat;
    }

};

//static members are always init. outside the class
int base::stat=0;

int main(){
    cout<<base::getStat()<<endl;

    base a1;
    base a2;

    cout<<base::stat<<endl;
    cout<<base::getStat()<<endl;

    cout<<a1.getStat()<<endl;
    cout<<a2.getStat()<<endl;

    return 0;

}