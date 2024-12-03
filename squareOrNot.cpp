#include<iostream>
using namespace std;
int main()
{
    long long a,b,c,d;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        if(a > b)swap(a,b);
        if(c > d)swap(c,d);

        if(a+c == b && a+c == d{
            cout<<"YES<< endl;
        }
        else{
            cout<<"NO" << endl;
        }
    }
    return 0;
}