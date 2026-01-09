#include <iostream>
using namespace std;

int main() {

    // 2D array representing seats
    int seats[3][5] = {
        {0, 1, 0, 0, 0},
        {0, 0, 0, 1, 0},
        {0, 1, 0, 0, 0}
    };

    int choice, row, col;

    do {
        cout << "\n1. Display Seats";
        cout << "\n2. Reserve a Seat";
        cout << "\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        // Display seats
        if (choice == 1) {
            cout << "\nSeating Arrangement (0 = Available, 1 = Reserved)\n";
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 5; j++) {
                    cout << seats[i][j] << " ";
                }
                cout << endl;
            }
        }

        // Reserve a seat
        else if (choice == 2) {
            cout << "Enter row number (0-2): ";
            cin >> row;
            cout << "Enter seat number (0-4): ";
            cin >> col;

            if (row < 0 || row >= 3 || col < 0 || col >= 5) {
                cout << "Invalid seat position!\n";
            }
            else if (seats[row][col] == 1) {
                cout << "Seat already reserved!\n";
            }
            else {
                seats[row][col] = 1;
                cout << "Seat reserved successfully!\n";
            }
        }

        else if (choice == 3) {
            cout << "Exiting program...\n";
        }

        else {
            cout << "Invalid choice!\n";
        }

    } while (choice != 3);

    return 0;
}

