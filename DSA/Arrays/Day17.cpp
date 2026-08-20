#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {1, 2, 2, 3, 1, 4, 3};
    int n = 7;

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count == 1)
        {
            cout << "First non-repeating element = " << arr[i];
            break;
        }
    }

    return 0;
}