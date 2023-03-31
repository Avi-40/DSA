#include <iostream>
using namespace std;

int sum(int size)
{
    int arr[100];
    int sum = 0, i;
    for (i = 0; i < size; i++)
    {
        cout << "Enter the value: ";
        cin >> arr[i];
    }
    for (i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int size;
    cout << "Input the size of array: ";
    cin >> size;
    cout << sum(size) << " is the sum of elements in the array";
    return 0;
}

/*#include <iostream>
using namespace std;

int sumarray(int arr[],int arr_size){
    int sum = 0;
    for(int i = 0; i<arr_size; i++){
        sum = sum + arr[i];
    }

    return sum;
}

int main() {

    int arr[100];
    int size;
    cout << "Input the size of array: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value: ";
        cin >> arr[i];
    }


    cout<< "Total Sum of Array is : "<<sumarray(arr,size);

}*/