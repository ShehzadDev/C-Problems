#include <iostream>
using namespace std;

int main() {

	int num;
	string name;
	cout << "Enter Your Choice :  ";
	cin >> num;
	cout << "Enter Your Name : ";
	cin >> name;

	//	condition ? true : false;
	num == 1
		?
		cout << "My Name: "
		<< name << endl
		:
		false;  // for false condition
	num == 2
		?
		cout << "Invalid Input"
		<< "" << endl
		:
		false;  // for false condition
	return 0;
}
