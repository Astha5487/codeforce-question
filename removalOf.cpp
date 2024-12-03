
void solve() {
    int n;
    cin >> n;
    
    vector<int> p(n);
    vector<int> steps(n, 0);

    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
 
    for (int i = 0; i < n - 1; ++i) {
        if (p[i] < p[i + 1]) {
            steps[i] = 1;  
        } else {
            steps[i] = 2; 
        }
    }
 
    for (int i = 0; i < n - 1; ++i) {
        cout << steps[i] << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;  
 
    while (t--) {
        solve();
    }
    
    return 0;
}