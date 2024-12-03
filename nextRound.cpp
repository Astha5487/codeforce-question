#include <iostream>
using namespace std;

int main() {
    int n, t;
    int cnt = 0;

    // Input the size of the array
    cin >> n;

    // Handle case when n is less than or equal to 0
    if (n <= 0) {
        return 1;
    }


    // Declare the array with the given size
    int arr[n];

    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input the index t
    cin >> t;

    // Check if the index t is within bounds
    if (t < 0 || t >= n) {

        return 1;
    }
   bool allZeros = true;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            allZeros = false;
            break;
        }
    }

    // If all elements are 0, output 0
    if (allZeros) {
        cout << 0 << endl;
        return 0;
    }

    // Count elements less than or equal to arr[t]
    for (int i = 0; i < n; i++) {
        if (arr[i] <= arr[t]) {
            cnt++;
        }
    }

    // Output the count
    cout << cnt << endl;

    return 0;
}
