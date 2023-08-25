#include <bits/stdc++.h>
using namespace std;

class House
{
    int length = 0;
    int breadth= 0;
    
    public:
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
    return 0;
}
