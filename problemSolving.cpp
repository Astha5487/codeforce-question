
void solve(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
    
    vector <int> difficulties(n);
    for(int i=0; i<n; i++){
        cin>> difficulties[i];
    }
    vector <int> sorted_diffs(difficulties.begin(), difficulties.end()-1);

    sort(sorted_diffs.begin(), sorted_diffs.end());

    if(sorted_diffs[n-2-1]==sorted_diffs[n-2-2]){
        cout << "Ambiguous" << endl;
    }
    else{
        cout << sorted_diffs[n-2-1] << endl;
    }
}
}

int main(){
    solve();

    return 0;
}