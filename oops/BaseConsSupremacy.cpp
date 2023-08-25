#include <bits/stdc++.h>
using namespace std;



class base{
    protected:
    int len;

    public:
    base(){
        cout<<"Base class default cons"<<endl;
    }

    base(int x){
        cout<<"Base class para cons "<<x<<endl;
    }
};

class derived:public base{

    public:
    //base class default cons will always gets priority 
    derived(){
        cout<<"derived class default cons"<<endl;
    }

    derived(int x){
        cout<<"derived class para cons"<<endl;
    }

    
};

int main(){
    //Default cons of base class will be called everytime even with para obj

    // derived obj1(); - This line does not create an object of the derived class. Instead, 
    // it declares a function named obj1 that takes no arguments and returns an object of type derived. 
    // This is known as the "most vexing parse" in C++ and can be surprising. 
    // To create an object, you should omit the parentheses:

    derived obj1;
    derived obj2(5); //if there were to be no para cons in derived it would throwed err regardless of base have para cons or not

    return 0;
}