// 

#include <iostream>
using namespace std;

int main()
{
    int arr1[5] = {10, 20, 30, 40, 50};
    int arr2[5] = {5, 10, 15, 20, 25};

    int target = 15;
    int count = 0;

    cout << "Pairs with difference " << target << ":" << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr1[i] - arr2[j] == target)
            {
                cout << arr1[i] << " - " << arr2[j]
                     << " = " << target << endl;

                cout << "Indexes: " << i << " and " << j << endl;

                count++;
            }
        }
    }

    cout << "Total pairs = " << count << endl;

    return 0;
}