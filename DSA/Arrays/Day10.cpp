// Q.13. Write a C++ program to input temperature of 5 cities in an array and display the temperature in reverse order.


#include<iostream>
using namespace std;
int main()
{
	int temp[5];
	
	cout<<"Enter the temp of 5 cities :\n ";
	for (int i=0; i<5; i++)
	{
		cin>>temp[i];
	}
	
	cout<<"temp in reverse order :\n";
	for(int i=4; i>=0; i--)
	{
		cout<<temp[i] << " ";
	}
    return 0;
}
