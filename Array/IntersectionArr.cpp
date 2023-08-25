/*#include <iostream>
using namespace std;
// Not Optimised
void occur(int arr1[], int arr2[], int size)
{

    for (int i = 0; i < size; i++)
    {
        int elem = arr1[i];
        for (int j = 0; j < size; j++)
        {

            if (elem == arr2[j])
            {
                cout << elem;
                arr2[j] = -5442;
                break;
            }
        }
    }
}
int main()
{
    int arr1[5] = {2, 2, 3, 4, 5};
    int arr2[5] = {2, 3, 3, 8, 9};
    occur(arr1, arr2, 5);

    return 0;
}
*/

#include <iostream>
using namespace std;
void occur(int arr1[], int arr2[], int size)
{
    int i = 0;
    int j = 0;
    while (i < size && j < size)
    {
        if (arr1[i] == arr2[j])
        {
            cout << arr1[i];
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
}
int main()
{
    int arr1[5] = {2, 2, 3, 4, 5};
    int arr2[5] = {2, 3, 3, 8, 9};
    occur(arr1, arr2, 5);

    return 0;
}
