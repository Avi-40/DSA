#include <bits/stdc++.h>
using namespace std;

void qs(int *arr,int s,int e){
    //pivot
    if(s>=e){
        return ;
    }
    int p=s;
    //pivotPosition
    int count=0;
    for(int i=0;i<=e;i++){
        if(arr[i]<arr[p]){
            count++;
        }
    }
    swap(arr[p],arr[count]);
    //SortLeft
    qs(arr,s,p-1);
    //SortRight
    qs(arr,p+1,e);
    
    return ;


}

int main(){
    //initialize
    int arr[8] = {4,6,2,5,7,9,1,3};
    int s=0;
    int e=7;
    //call
    qs(arr,s,e);
    //print
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}