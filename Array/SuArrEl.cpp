#include <iostream>
using namespace std;

void occur(int arr1[], int size)
{
    int s = 5;
    for (int i = 0; i < size; i++)
    {

        for (int j = i + 1; j < size; j++)
        {

            if (arr1[i] + arr1[j] == s)
            {
                cout << arr1[i] << " " << arr1[j] << endl;
            }
        }
    }
}
int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};

    occur(arr1, 5);

    return 0;
}
