#include <bits/stdc++.h>
using namespace std;


class person {
private:
    string name;
    string DOB;
    string email;

public:
void entry(){
    cout<< "Enter name: ";
    cin>> this->name;
    cout << "Enter DOB: ";
    cin >> this->DOB;
    cout << "Enter Email: ";
    cin >> this->email;
}

void print(){
    cout << "Name   : "<< this->name << endl;
    cout << "DOB    : "<< this->DOB << endl;
    cout << "Email  : "<< this->email << endl;

}


};

int main() {
    vector<person> member;
    int n;
    cout<<"Enter No. of Members: ";
    cin>>n;
    for(int i=0;i<n;i++){
        member.push_back(person());
    }
    for(int i=0;i<n;i++){
        member[i].entry();
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        member[i].print();
        cout<<endl;
    }


    return 0;
    
}