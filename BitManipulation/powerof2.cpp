#include <iostream>
#include <math.h>
using namespace std;
/*int main()
{

    int i, a, n;
    n = 9;
    for (i = 0; i <= 30; i++)
    {
        a = pow(3, i);
        if (a == n)
        {
            cout << "T";
            return true;
        }
        // ans=ans*2 best way is if no. of set bits is one 1 its true
    }
    cout << "f";
    return false;
}*/
#include <iostream>
// Function to check if the number "x" is power of 4
bool is_power_of_2(int x)
{
    // Check if the number has only one set bit
    if ((x & (x - 1)) != 0)
        return false;
    return true;
}
int main(int argc, char *argv[])
{
    int n;
    std::cout << "Enter a number:" << std::endl;
    std::cin >> n;
    // Print the result
    std::cout << ((is_power_of_2(n)) ? "YES" : "NO") << std::endl;
    return 0;
}
/*My Approch using bitwise opprators (beats 52%):-
    bool isPowerOfTwo(int n) {
            if(n<1){
                return 0;
            }
            int count = 0;

            while (n != 0){
                if (n & 1){
                    ++count;
                     if (count > 1){
                        return 0;
                    }
                    n = n >> 1;
                }
                else{
                    n = n >> 1;
                }

            }
            return 1;
        }
    */