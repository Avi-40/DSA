#include <bits/stdc++.h>
using namespace std;



class Rectangle{
    protected:
    int len;
    int breadth;

    public:
    Rectangle(int x=0, int y=0){
        len=x;
        breadth=y;
    }

    void area(){
        cout<<len*breadth<<endl;
    }
};

class Cuboid:public Rectangle{
    protected:
    int height;

    public:
    Cuboid(int x=0, int y=0, int z=0){
        len=x;
        breadth=y;
        height=z;
    }

    void vol(){
        cout<<len*breadth*height<<endl;
    }
};

int main(){
    Rectangle paper(30,40);
    paper.area();
    Cuboid box(40,50,50);
    box.vol();
    return 0;
}