#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {2, 4, 6, 8, 10};
    bool sorted= true;

    for(int i = 0; i < 4; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            sorted = false;
            break;
        }
    }
        
       if(sorted)
       {
          cout << "Sorted";
       }
       else
       {
          cout << "Not Sorted";
       }

    return 0;
}