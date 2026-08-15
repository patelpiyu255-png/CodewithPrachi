#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {1, 0, 3, 0, 5, 0, 2};
    int n = 7;

    int nonZeroCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            nonZeroCount++;
        }
    }

    cout << "Total non-zero elements = " << nonZeroCount;

    return 0;
}