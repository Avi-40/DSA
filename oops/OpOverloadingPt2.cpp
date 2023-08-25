#include <bits/stdc++.h>
using namespace std;



class A{
    protected:
    int weight;

    public:
    A(int x=0){
        weight=x;
    }
    void operator++(){
        ++weight;
         cout<<"here1";
    }
    void operator++(int){
        weight++;
        cout<<"here";
    }

    void PrintWeight(){
        cout<<weight;
    }
};

int main(){
    A person1(300);
    ++person1;
    person1++;
    person1.PrintWeight();
    return 0;
}