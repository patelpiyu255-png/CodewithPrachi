#include <iostream>
using namespace std;

int main(){
    int arr[5];
    int search;
    bool found = false;

    cout<<"Enter 5 elements in the array: ";

    for(int i=0; i<5; i++){
        cin>>arr[i];
    }

    cout<<"Enter the element to search: ";
    cin>>search;

    for(int i=0; i<5; i++){
        if(arr[i] == search){
            found = true;
            break;
        }
    }
    
    if(found)
        cout<<"Element found in the array.";
    else
        cout<<"Element not found in the array.";
}