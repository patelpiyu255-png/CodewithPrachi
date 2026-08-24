#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {-2, 1, -3, 4, 5};

    int currentSum = arr[0];
    int maxSum = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if (currentSum + arr[i] > arr[i])
        {
            currentSum = currentSum + arr[i];
        }
        else
        {
            currentSum = arr[i];
        }

        if (currentSum > maxSum)
        {
            maxSum = currentSum;
        }
    }

    cout << "Maximum subarray sum = " << maxSum << endl;

    return 0;
}