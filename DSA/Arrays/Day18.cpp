#include <iostream>
using namespace std;

int main()
{
    int arr1[4] = {1, 2, 3, 4};
    int arr2[4] = {3, 4, 5, 6};

    int arr3[8];
    int k = 0;

    for (int i = 0; i < 4; i++)
    {
        arr3[k] = arr1[i];
        k++;
    }

    for (int i = 0; i < 4; i++)
    {
        bool found = false;

        for (int j = 0; j < k; j++)
        {
            if (arr2[i] == arr3[j])
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            arr3[k] = arr2[i];
            k++;
        }
    }

    cout << "Union of arrays: ";

    for (int i = 0; i < k; i++)
    {
        cout << arr3[i] << " ";
    }

    return 0;
}