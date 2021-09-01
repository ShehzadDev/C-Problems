//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//	int num = 9;
//	int space_count = 0;
//	cin >> num;
//	if (num % 2 == 0) {
//		char navigation = '0';
//		cout << "This digit is not shapable" << endl;
//		cout << "Do you want to try agian (y, n):";
//		cin >> navigation;
//		if (navigation == 'y' || navigation == 'Y') {
//			num = 0;
//			main();
//		}
//		else {
//			exit(0);
//		}
//	}
//	else {
//		space_count = num / 2 + 1;
//	}
//	for (int i = 1; i <= num; i++)
//	{
//
//
//		if (i % 2 != 0)
//		{
//			cout << setw(space_count);
//			for (int k = 0; k < i; k++)
//			{
//				cout << "*";
//			}
//			cout << endl;
//			space_count--;
//		}
//	}
//	space_count = 1;
//	for (int i = 1; i <= num; i++)
//	{
//
//
//		if (i % 2 != 0)
//		{
//			space_count++;
//			cout << setw(space_count);
//			for (int k = num - 1; k > i; k--)
//			{
//				cout << "*";
//			}
//			cout << endl;
//		}
//	}
//	return 0;
//}