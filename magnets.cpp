#include<iostream>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    int a[100000];
    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=0; i<n; i++)
    {
        if(a[i]!=a[i+1])
            c++;
    }
    cout<<c<<endl;
    return 0;
}