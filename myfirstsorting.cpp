#include<iostream>
using namespace std;

int main(){
 long long a,b;
 int t;
    cin>> t;
    while(t--){
        cin>> a>> b;
        cout << min(a,b) << " " << max(a,b) << endl;
    }
}