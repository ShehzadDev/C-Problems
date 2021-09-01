//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//
//	//	Prices
//	const double cur_release = 3.50;
//	const double other = 2.50;
//	double total_price = 0;
//
//	int no_DVDs = 0;
//	cout << setw(39) << left << "How many DVDs are being rented?     "; cin >> no_DVDs;
//
//	int index = 1;
//
//	do {
//
//		char choice = 'y';
//
//		if (index % 3 != 0) {
//			cout << "Is DVD #" << index << " a current release? (Y/N)     ";
//			cin >> choice;
//
//			if (choice == 'y' || choice == 'Y') {
//				total_price += cur_release;
//				index++;
//			}
//			else if (choice == 'n' || choice == 'N') {
//				total_price += other;
//				index++;
//			}
//		}
//		else {
//			cout << "DVD #" << index << "is free!" << endl;
//			index++;
//		}
//
//	} while (index <= no_DVDs);
//
//	cout << setw(39) << right << " The total is   $ " << total_price << endl;
//	return 0;
//}