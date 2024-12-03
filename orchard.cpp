#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int calculateMaxFruits(const string& row) {
    int n = row.length();
    
    if (n < 3) {
        return -1;
    }
    
    int maxFruits = -1;
    
    for (int i = 0; i <= n - 3; i++) {
        if (row[i] != row[i+1] && row[i+1] != row[i+2] && row[i] != row[i+2]) {
            int countM = (row[i] == 'M') + (row[i+1] == 'M') + (row[i+2] == 'M');
            maxFruits = max(maxFruits, countM);
        }
    }
    
    return maxFruits;
}

bool isValidString(const string& row) {
    for (char c : row) {
        if (c != 'M' && c != 'L') {
            return false;
        }
    }
    return true;
}

int main() {
    string ashokRow, anandRow;
    cout << "Enter Ashok's row: " << endl;
    cin >> ashokRow;
    cout << "Enter Anand's row: " << endl;

    if (!isValidString(ashokRow) || !isValidString(anandRow)) {
        cout << "Invalid input" << endl;
        return 0;
    }
    int ashokFruits = calculateMaxFruits(ashokRow);
    int anandFruits = calculateMaxFruits(anandRow);
    if (ashokFruits == -1 && anandFruits == -1) {
        cout << "Draw" << endl;
    } else if (ashokFruits > anandFruits) {
        cout << "Ashok" << endl;
    } else if (anandFruits > ashokFruits) {
        cout << "Anand" << endl;
    } else {
        cout << "Draw" << endl;
    }
    
    return 0;
}