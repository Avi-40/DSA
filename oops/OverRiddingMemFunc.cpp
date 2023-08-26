    #include <bits/stdc++.h>
    using namespace std;

    class base
    {
    public:
        void msg(){
            cout<<"Base function was used"<<endl;
        };
    };

    class derived:public base
    {
    public:
        //Always the latest function will be called
        //This function overridding the function in base class
        void msg(){

            cout<<"Derived function was used"<<endl;
            
            //if you wanna call the function of base class without creating oject of it
            base::msg();//calling
        };  
    };

    int main(){

        base b;
        b.msg();

        derived c;
        c.msg();

        return 0;

    }