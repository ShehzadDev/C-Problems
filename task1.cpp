//#include <iostream>
//using namespace std;
//
//int main() {
//    int age = 0;
//    string x = "";
//    string terminate = "-1";
//
//    do {
//
//        system("cls");
//
//        cout << "enter your age: "; cin >> age;
//
//        if (age < 18) {
//            cout << "too young to vote" << endl;
//        }
//        else if (age >= 18) {
//            char choice = 'y';
//            cout << "do you have id card? (y/n)"; cin >> choice;
//
//            if (choice == 'y' || choice == 'y') {
//                cout << "yes you can vote" << endl;
//            }
//            else if (choice == 'n' || choice == 'n') {
//                cout << "no you cannot vot" << endl;
//            }
//            else {
//                cout << "input error!" << endl;
//            }
//
//        }
//
//        cout << "input_> "; cin >> x;
//    } while (x != terminate);
//    return 0;
//}