#include<iostream>
using namespace std;

int main()
{
    int arr[6] = {1, 3, 5, 8, 6, 10};

    for(int i= 0; i < 5; i++)
    {
        if(arr[i] > arr[i+1])
        {
            cout<<"First out-of-order element is: ";
            cout<<arr[i]<<" "<<arr[i + 1];

            break;
        }
    }

    return 0;
}