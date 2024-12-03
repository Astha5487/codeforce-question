#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main(){
    int a;
    cin >> a;

    while(a--){
        int n;
        cin >> n;
        vector<vector<int> > arr(n, vector<int>(n));

        for(int i=0; i<n; ++i){
            for(int j=0; j<n; ++j){
                cin>> arr[i][j];
            }
        }
        int count =0;

        for(int d=0; d<n; ++d){
            int i=0;
            int minheight=0;
            int j=d;
            while(d<n && j<n){
                minheight= min(minheight, arr[i][j]);
                i++;
                j++;
            }
            if(minheight<0){
                count += -minheight;
            }
        }
       for(int d=1; d<n; d++){
        int i=d;
        int j=0;
        int minheight =0;
        while(i<n && j<n){
             minheight= min(minheight, arr[i][j]);
             i++;
             j++;
        }
        if(minheight<0){
                count += -minheight;
            }
       }

       cout << count << endl;
    }
    return 0;

}
