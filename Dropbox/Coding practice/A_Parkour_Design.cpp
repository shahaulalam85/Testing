#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long x, y;
        cin >> x >> y;
        long long val = x - 2*y;
        if(val >= 0 && val % 3 == 0 && x>=abs(y))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}