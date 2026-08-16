#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {1, 2, 2, 3, 1, 2, 4};
    int n = 7;

    cout << "Duplicate frequency:" << endl;

    for (int i = 0; i < n; i++)
    {
        int count = 1;

        bool alreadyCounted = false;

        for (int k = 0; k < i; k++)
        {
            if (arr[i] == arr[k])
            {
                alreadyCounted = true;
                break;
            }
        }

        if (alreadyCounted)
        {
            continue;
        }

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count > 1)
        {
            cout << arr[i] << " -> " << count << " times" << endl;
        }
    }

    return 0;
}