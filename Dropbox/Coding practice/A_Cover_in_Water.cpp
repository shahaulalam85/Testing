#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;
        string s;
        cin >> n;
        cin >> s;
        bool empty_three = false;
        int empty = 0;
        for(int i=0; i<n; i++){
            if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.'&& i+1<n && i+2<n){
                empty_three = true;
                break;
            }
            if(s[i]=='.') empty++;
        }
        if(empty_three) cout << 2 << endl;
        else cout << empty << endl;
    }

    return 0;
}