#include <iostream>
using namespace std;

int main()
{
    int array[100];

    // To initialize the array with value'1'.
    fill_n(array, 100, 5);

    // To check the array input (kewaal 5 hi kari h print)
    // size of array = sizeof(arr)/sizeof(int)
    for (int i = 0; i <= 104; i++)
    {
        cout << array[i] << endl;
    }
}