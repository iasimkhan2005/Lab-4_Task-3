#include <iostream>
#include <vector>
#include "Spreadsheet.h"
using namespace std;


int main() {
    Spreadsheet spreadsheet;

    int choice;
    int rowIndex;

    do {
        cout << "\nSpreadsheet Application Menu:\n";
        cout << "1. Display Spreadsheet\n";
        cout << "2. Add a New Row\n";
        cout << "3. Delete a Row\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            spreadsheet.display();
            break;
        case 2:
            spreadsheet.addRow();
            break;
        case 3:
            cout << "Enter the index(0,1,2...) of the row to delete: ";
            cin >> rowIndex;
            spreadsheet.deleteRow(rowIndex);
            break;
        case 4:
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (choice != 4);

    return 0;
}