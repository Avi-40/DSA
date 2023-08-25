#include <bits/stdc++.h>
using namespace std;

class phone{
    string name;
    string processor;
    int ram;

    public:
    //OverLoaded Constructor (Capable of performing more tham one task)-->

    //phone phone0;
    //phone phone1("Iphone13","SnapDragon",8);
    
    phone(string n="NULL",string p="NULL",int r=0){
        name=n;
        processor=p;
        ram=r;
    }

    //Copy constructor
    phone(phone &obj1){
        name=obj1.name;
        processor=obj1.processor;
        ram=obj1.ram;
    }
    //We can declare a function in the class and body outside the class
    void getData();  
};

void phone::getData(){
    cout<<endl<<"Name:      "<<name;
    cout<<endl<<"processor: "<<processor;
    cout<<endl<<"Ram:       "<<ram<<"GB";
    cout<<endl;
}

int main() {

    phone phone0;
    phone phone1("Iphone13","SnapDragon",8);
    phone phone2(phone1);

    phone0.getData();
    phone1.getData();
    phone2.getData();
    
    return 0;
}