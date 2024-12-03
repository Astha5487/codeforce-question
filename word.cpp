#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string s;
    cin>>s;
int countup=0;
int countlow=0;
for(int i=0; i<s.size(); i++){
    if(isupper(s[i]))
    countup++;

    else
    countlow++;
}

if(countup <= countlow){
    char ch;
    for(int i=0; i<s.size(); i++){
        cout << (char)tolower(s[i]);
    }
   
}

else{
	    char ch;
	    for(int i=0;i<s.size();i++){
	        cout << (char)toupper(s[i]);
	    }
}
return 0;
}