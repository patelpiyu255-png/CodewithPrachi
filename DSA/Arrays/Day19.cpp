#include <iostream>
using namespace std;

int main()
{
    int arr1[4] = {1, 2, 4, 6};
    int arr2[4] = {3, 5, 7, 8};

    int target = 9;

    cout << "Pairs with sum " << target << ":" << endl;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr1[i] + arr2[j] == target)
            {
                cout << arr1[i] << " + " << arr2[j]
                     << " = " << target << endl;
            }
        }
    }

    return 0;
}