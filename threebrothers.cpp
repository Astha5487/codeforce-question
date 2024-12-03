#include <iostream> 
using namespace std;
 int lateBrother (int a, int b){
  int ans = 6-(a+b);
  return ans;

}
int main() {
    int a, b;
    cin >> a >> b;
    
    int result = lateBrother(a, b);
    cout << result << endl;
    
    return 0;
}