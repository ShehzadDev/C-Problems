#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int maxi = 0;
int mini = 0;
int i = 0;

int main()
{
	int arr[5] = { 0 };
	for ( i = 0; i < 5; i++)
	{
		cout << "enter your sample data : ";
		cin >> arr[i];
		maxi = arr[0];
		mini = arr[0];
	}
	for ( i = 0; i < 5; i++)
	{
		maxi < arr[i] ?
			maxi = arr[i]:
			false;
	}
	cout << "the maximum number is : " << maxi<<endl;
	for ( i = 0; i < 5; i++)
	{
		mini > arr[i] ?
			mini = arr[i]:
		false;
	}
	cout << "the minimum no is : "<<mini;
}
