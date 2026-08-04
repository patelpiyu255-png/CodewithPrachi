//find largest number in an array
#include<iostream>
using namespace std;

int main(){
    int arr[5];

    cout<<"Enter 5 numbers: ";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }

        for(int i=0; i<5; i++){
        cout<<arr[i]<<" "<<endl;
    }

    int largest=arr[0];
    for(int i=1; i<5; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }

    cout<<"Largest number in the array is: "<<largest<<endl;
    return 0;
}