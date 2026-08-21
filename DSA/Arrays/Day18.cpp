#include <iostream>
using namespace std;

int main()
{
    int arr1[4] = {4, 2, 1, 3};
    int arr2[4] = {5, 3, 2, 6};

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

    for (int i = 0; i < k; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (arr3[i] > arr3[j])
            {
                int temp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = temp;
            }
        }
    }

    cout << "Union: ";

    for (int i = 0; i < k; i++)
    {
        cout << arr3[i] << " ";
    }

    cout << endl;

    cout << "Total unique elements = " << k;

    return 0;
}