//#include <iostream>
//using namespace std;
//
//int main() {
//
//	int num = 0;
//
//	char choice = 'y';
//	while (choice == 'y' || choice == 'Y') {
//
//		int index = 1;
//		int sum = 0;
//
//		cout << "Enter the number: "; cin >> num;
//
//		while (index < num) {
//			if (num % index == 0) {
//				sum += index;
//			}
//			index++;
//		}
//
//		if (sum == num) {
//			cout << num << " is a Perfect Number" << endl;
//		}
//		else {
//			cout << num << " is not a Perfect Number" << endl;
//		}
//
//		cout << "\nEnter choice: "; cin >> choice;
//
//	}
//	return 0;
//}