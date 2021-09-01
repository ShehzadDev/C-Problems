//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int num = 0,sum=0;
//	cin >> num;
//	for (int i = 1; i <= num; i--)
//	{
//		sum +=i;
//	}
//	cout << sum<< endl;
//}
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int rows;
//
//    cout << "Enter number of rows: ";
//    cin >> rows;
//
//    for (int i = 0; i <= rows; i++)
//    {
//        for (int j = 1; j<=rows; j++)
//        {
//            cout << "X";
//        }
//        cout << "\n";
//    }
//    return 0;
//}
#include<iostream>
using namespace std;
int main()
{
	int n, s, i, j;
	cout << "Enter number of rows: ";
	cin >> n;
	for (i = 0; i <= n; i++)
	{
		for (s = n; s > i; s--)
			cout << " ";
		for (j = 0; j < i; j++)
			cout << "* ";
		cout << "\n";
	}
	for (i = 1; i < n; i++)
	{
		for (s = 0; s < i; s++)
			cout << " ";
		for (j = n; j > i; j--)
			cout << "* ";
		// ending line after each row
		cout << "\n";
	}
	return 0;
}