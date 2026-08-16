#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {1, 2, 3, 2, 4, 1, 5};
    int n = 7;

    cout << "Duplicate elements: ";

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << " ";
                break;
            }
        }
    }

    return 0;
}