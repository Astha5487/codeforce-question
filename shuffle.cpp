void permutation(int n){
    if(n==3){
        cout << "-1" << endl;
        return;
    }
    for(int i=1; i<n; i++){
        cout << i << " " ;
    }
    cout << endl;
}
int maim(){
    int t;
    cin>> t;

    while(t--){
        int n;
        cin>> n;

        permutation();
    }
    return 0;


}