#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	string file_Name = "data.txt";
	ifstream ifile;
	ifile.open(file_Name.c_str());
	int num = 0;
	int prize = 0;
	cout << "Enter Your Prize Bond No. : ";
	cin >> prize;
	while (ifile.good())
	{
		ifile >> num;
		if (prize == num)
		{
			cout << "Congratulations You Got Your Number\n";
			cout << "Your No. has a Match \n" << prize<<"\n";
		}
		
	}
	num++;
	 if (num != prize)
		{
		cout << "Sorry Better Luck Next Time \n";
		}
		
	return 0;

}

