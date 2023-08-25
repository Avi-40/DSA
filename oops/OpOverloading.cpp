#include <bits/stdc++.h>
using namespace std;


//Traditional approach to add two objects  
class A{
    protected:
    int weight;

    public:
    A(int x=0){
        weight=x;
    }
    A addWeight(A obj2){
        A temp;
        temp.weight=weight+obj2.weight;
        return temp;
    }

    void getWeight(){
        cout<<weight;
    }
};

//Operator Overloading

class OpOverloading:public A
{
    public:
    OpOverloading(int x=0) : A(x){
    }
    //Or 
    OpOverloading(int x=0){
        weight=x;
    }
    // Overload the + operator to add two OpOverloading objects
    OpOverloading operator+(const OpOverloading& obj2) {
        OpOverloading temp;
        temp.weight = weight + obj2.weight;
        return temp;
    }
};

int main(){
    A person1(300);
    A person2(400);

    A total;
    total=person1.addWeight(person2);
    //or vice versa
    total=person2.addWeight(person1);

    total.getWeight();
    cout<<endl;

    OpOverloading test1(200);
    OpOverloading test2(300);
    OpOverloading total2;

    total2 = test1 + test2; // Use the overloaded + operator
    total2.getWeight();
}