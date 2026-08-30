#include <iostream>
using namespace std;

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[3] = {2, 4, 6};

    cout << "Elements only in first array: ";

    for (int i = 0; i < 5; i++)
    {
        bool found = false;

        for (int j = 0; j < 3; j++)
        {
            if (arr1[i] == arr2[j])
            {
                found = true;
                break;
            }
        }

        if (found == false)
        {
            cout << arr1[i] << " ";
        }
    }

    return 0;
}