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
    derived():base(){
        cout<<"derived class default cons"<<endl;
    }
    //We just call the base class para function after fetching the data from derived
    //Will execute base class para cons
    derived(int x):base(x){
        cout<<"derived class para cons"<<endl;
    }

    
};

int main(){
    //Default cons of base class will be called everytime even with para obj

    derived obj1;
    derived obj2(5); 
    //if there were to be no para cons in derived it would throwed err 
    //regardless of base have para cons or not
    //To call the base cons we do this:---

    //derived(int arg):base(int arg)

    return 0;
}