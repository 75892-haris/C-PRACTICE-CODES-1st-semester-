#include<iostream>
using namespace std;
int main()
{
	int choice;
	double num1,num2;
	double result;
    do {
        cout<<"-----MENU-----"<<endl;
        cout<< "1. Add"<<endl;
        cout << "2. Subtract"<<endl;
        cout << "3. Multiply"<<endl;;
        cout << "4. Divide"<<endl;
        cout << "5. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        }

        switch (choice) {
            case 1:
                result = num1 + num2;
                cout << "Result = " << result << endl;
                break;

            case 2:
                result = num1 - num2;
                cout << "Result = " << result << endl;
                break;

            case 3:
                result = num1 * num2;
                cout << "Result = " << result << endl;
                break;

            case 4:
                if (num2 == 0) {
                    cout << "Error! Division by zero is not allowed."<<endl;
                } else {
                    result = num1 / num2;
                    cout << "Result = " << result << endl;
                }
                break;

            case 5:
                cout << "Exiting the program.."<<endl;
                break;

            default:
                cout << "Invalid choice! Please try again."<<endl;
        }

    } while (choice != 5);

    return 0;
}


