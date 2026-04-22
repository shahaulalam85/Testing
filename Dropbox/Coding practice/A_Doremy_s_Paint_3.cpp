#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int o;
        cin >> o;
        vector<int> a(o);
        for(int i=0; i<o; i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        int m = a[0];
        int n = a[o-1];
        int cm =0 , cn =0;
        bool flag = false;
        for(int i=0; i<o; i++){
            if(a[i] != m && a[i] != n){
                flag = true;
                break;
            }
            if(a[i]==m) cm++;
            if(a[i]==n) cn++;
        }
        if(flag) cout << "No" << endl;
        else if(cm-1==cn || cm+1==cn || cm==cn) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}