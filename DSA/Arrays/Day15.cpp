#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {1, 2, 3, 5};
    int n = 5;

    int total = 0;
    int arraySum = 0;

    for (int i = 1; i <= n; i++)
    {
        total = total + i;
    }

    for (int i = 0; i < 4; i++)
    {
        arraySum = arraySum + arr[i];
    }

    int missing = total - arraySum;

    cout << "Missing number = " << missing;

    return 0;
}