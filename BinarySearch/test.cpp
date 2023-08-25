
#include <bits/stdc++.h>
using namespace std;
        int bs(int arr[]){
        int sum = 0;
            for (int i = 0; i < 6; i++)
            {
                sum += arr[i];
            }
            cout<<sum<<"sum"<<endl;
        int s = 0;
        int e = 6;
        int mid = s + (e - s) / 2;

        while (s < e)
            {
                 int sum1=0;
                
                 
                 for(int i=0;i<mid;i++){
                    sum1+=arr[i];
                } 
                int sum2=sum-sum1-arr[mid];
                cout<<sum1<<"  "<<sum2<<" "<<mid<<endl;
                if(sum1==sum2){
                    return mid;
                }
                if (sum1 > sum2)
                {
                    e = mid;
                }
                else
                    s = mid+1;

                mid = s + (e - s) / 2;
            }
            return -1;

        }
   
int main(){
    int arr[6]={-1,-1,-1,-1,0,1};
    cout<<bs(arr)<<endl;

}
        