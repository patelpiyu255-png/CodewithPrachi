#include<iostream>
using namespace std;

int main(){
    int arr[5] = {10, 25, 7, 40, 30};
    
    int smallest = arr[0];
    int secondsmallest = INT_MIN;

    for(int i = 0; i < 5; i++){
        if(arr[i]<smallest)
        {
            secondsmallest = smallest;
            smallest = arr[i];
        }
        else
        if( arr[i] < secondsmallest && arr[i] !=smallest)
        {
            secondsmallest = arr[i];
        }
    }

    cout<<"Smallest = "<<smallest<<endl;
    cout<<"SecondSmallest = "<<secondsmallest<<endl;

    return 0;
    

}

