// count even number from array
#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int count = 0;

    cout<<"Enter number:";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }

    //count
    for(int i=0; i<5; i++){
        if(arr[i]%2 == 0){          
            count++;
        }
    }

    cout<<"Total Even Number: "<<count<<endl;
    return 0;
}