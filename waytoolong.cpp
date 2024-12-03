#include<iostream>
#include<string>
using namespace std;
string wayTooLong(string str){
    long long int n= str.size();
    if (n == 0) {
        return "";
    }
    else if(n<=10){
        return str;
    }
    else {
     return string(1, str[0]) + to_string(n - 2) + string(1, str[n - 1]);
    }
}
int main(){

    string str;
    cin>> str;
    cout << wayTooLong(str) << endl;
    
    return 0;
    
}