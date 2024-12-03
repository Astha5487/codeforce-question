#include<iostream>
using namespace std;
int main(){
    int k,n,w;
    long long ans=0;
    cin>> k>> n>> w;
    for(int i=1; i<=w; i++){
        ans = ans + (k*i);
    }
    if(ans<= n){
		cout <<0<< endl;
	}
    else
    cout << ans-n << endl;
    return 0;
}