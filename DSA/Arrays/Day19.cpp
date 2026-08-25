#include <iostream>
using namespace std;

int main()
{
    int n, m, target;

    cout << "Enter size of first array: ";
    cin >> n;

    int arr1[n];

    cout << "Enter elements of first array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> m;

    int arr2[m];

    cout << "Enter elements of second array: ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    cout << "Enter target sum: ";
    cin >> target;

    int count = 0;

    cout << "\nPairs with sum " << target << ":" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr1[i] + arr2[j] == target)
            {
                cout << arr1[i] << " + " << arr2[j]
                     << " = " << target << endl;

                count++;
            }
        }
    }

    cout << "\nTotal pairs = " << count << endl;

    return 0;
}