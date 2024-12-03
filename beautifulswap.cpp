#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int bubbleSort(vector <int> arr) {
    int n= arr.size();
    int swapCount = 0;
    bool swapped;

    for(int i=0; i<= n-2; i++){
        swapped = false;

        for(int j=0; j< n-i-1; j++){
            if(arr[j]> arr[j+1]){
            swap (arr[j], arr[j+1]);
            swapCount ++;
            swapped = true;
        }
    }
    if(!swapped) break;
    }
    return swapCount;
}

int minSwaps(vector<int> arr){
    vector <int> ascending = arr;
    vector <int> descending = arr;

    sort(ascending.begin(), ascending.end());
    sort(descending.begin(), descending.end(), greater<int> ());

    int ascendingSwaps = bubbleSort(arr);
    int descendingSwaps= bubbleSort(arr);

    return min(ascendingSwaps,ascendingSwaps);

}

int main(){
    vector <int> arr= {4,3,1,2};

    int result = minSwaps(arr);
    cout << result << endl;
    return 0;
}