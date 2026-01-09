#include <iostream>
using namespace std;

int main() {

    int rows = 5;
    int columns = 5;

    for (int i = 1; i <= rows; i++) {

        if (i == 1 || i == rows) {
            // First and last row 
            for (int j = 1; j <= columns; j++) {
                cout << "*";
            }
        }
        else {
            cout << "*";         
            for (int j = 1; j <= columns - 2; j++) {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}

