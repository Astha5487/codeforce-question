#include<iostream>
using namespace std;
int elephant(int x){
    int steps = x/5;
    if(x%5!=0){
        steps+=1;
    }
    return steps;
}
int main(){
    int x;
    cin>> x;
    cout<< elephant(x) << endl;

}