#include <bits/stdc++.h>
using namespace std;

class House
{
    int length;
    int breadth;
    
    public:
    //Default user defined constructor 
    //Good pratice to initialize object with some default values
    //Because garbage values can break the code
    House(){
        length=0;
        breadth=0;
    }
    //copy constructor
    House(House &object1){
        length=object1.length;
        breadth=object1.breadth;
    }
    void setData(int x,int y){
        length=x;
        breadth=y;
    }

    void area(){
        cout<<"Area of house: "<< length*breadth<<endl;
    }
    
};

int main(){

    House gini;
    gini.setData(300,400);
    gini.area();
    House Doge(gini);
    Doge.area();
    return 0;
}
