#include <iostream>
using namespace std;

int main()
{
    int arr1[5] = {1, 2, 2, 4, 6};
    int arr2[5] = {3, 5, 7, 8, 8};

    int target = 9;
    int count = 0;

    cout << "Pairs with sum " << target << ":" << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr1[i] + arr2[j] == target)
            {
                bool alreadyFound = false;

                // Check if same values were already printed
                for (int k = 0; k < i; k++)
                {
                    if (arr1[k] == arr1[i])
                    {
                        alreadyFound = true;
                        break;
                    }
                }

                if (!alreadyFound)
                {
                    cout << arr1[i] << " + " << arr2[j]
                         << " = " << target << endl;

                    cout << "Indexes: "
                         << i << " and " << j << endl;

                    count++;
                }
            }
        }
    }

    cout << "Total unique pairs = " << count << endl;

    return 0;
}