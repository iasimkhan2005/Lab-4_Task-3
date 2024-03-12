#pragma once
using namespace std;
class Spreadsheet {
private:
    vector<vector<string>> data;

public:
    void display()  {
        if(!data.empty()){
            int  i = 0;
            for ( const auto & row : data ) {
                for (const auto& cell : row) {
                 
                    cout << "Row NO."<< ++i <<": " << cell << "\t";
                    
                }
                cout << endl;
            }
        }
        else
        {
            cout << "No Rows are there in Spreadsheet yet!!!" << endl;
        }
       
    }

    void addRow() {
        vector<string>  newRow;
        string cellData;
        if (!data.empty()) {
           cout << "Enter data for each cell in the new row:" ;
            for (size_t i = 0; i < data[0].size(); ++i) {
                cout << "Cell " << i + 2 << ": ";
                cin >> cellData;
                newRow.push_back(cellData);
            }
        }
        else {
            cout << "No existing rows.\n Enter data for the 1st row in Cell 1:  " ;
            cin >> cellData;
            newRow.push_back(cellData);
        }

        data.push_back(newRow);
        cout << "Row added successfully!" << endl;
    }

    void deleteRow(int rowIndex) {
        if (rowIndex >= 0 && rowIndex < data.size()) {
            data.erase(data.begin() + rowIndex);
            cout << "Row deleted successfully!" << endl;
        }
        else {
            cout << "Invalid row index. Please enter a valid index." << endl;
        }
    }
};

