#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>> a[i];
    }

    unordered_set<int> sums;
    int sum =0;
    int seg=0;
    sums.insert(0);

    for(int i=0; i<n; i++){
        sum+= a[i];

        if(sums.count(sum)){
            seg++;

            sums.clear();
            sums.insert(0);
            sum =0;
        }
        sums.insert(sum);
    }
    cout << seg << endl;
   }

    return 0;

}