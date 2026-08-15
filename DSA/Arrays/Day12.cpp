#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {1, 0, 3, 0, 5, 0, 2};
    int n = 7;

    int index = 0;
    int zeroCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[index] = arr[i];
            index++;
        }
    }

    while (index < n)
    {
        arr[index] = 0;
        index++;
    }

    cout << "Array after moving zeros: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Total zeros = " << zeroCount << endl;

    return 0;
}