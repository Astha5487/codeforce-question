#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int cntA=0;
    int cntD=0;
    int n;
  cin>> n;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='A'){
            cntA++;
        }
       else if (s[i] == 'D'){
            cntD++;
        }
    }
if(cntA>cntD){
    cout << "Anton" << endl;
}
else if(cntA<cntD){
    cout << "Danik" << endl;
}

else{
    cout << "Friendship" << endl;
}

return 0;
}