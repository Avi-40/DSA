#include <iostream>
using namespace std;
// Will fix it after learning map
void occur(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int count[5];
    for (int i = 0; i < size; i++)
    {
        int ans = 0;
        for (int j = 0; j < size; j++)
        {

            if (arr[i] == arr[j])
            {
                ans++;
            }

            count[i] = ans;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << count[i] << " ";
    }
}
int main()
{
    int arr[5] = {2, 2, 3, 5, 5};
    occur(arr, 5);

    return 0;
}
