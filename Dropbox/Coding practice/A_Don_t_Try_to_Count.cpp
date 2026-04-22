#include <bits/stdc++.h>
using namespace std;
bool subString(string x, string s){
    if(x.size() < s.size()) return false;
    for(int i=0; i< x.size()-s.size()+1; i++){
        if(x.substr(i, s.size()) == s) return true;
    }
    return false;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n , m;
        cin >> n >> m; 
        string x; 
        cin >> x;
        string s;
        cin >> s;
        int oper =0;
        string x0 = x;
        string x1 = x0 + x0; // operation 1
        string x2 = x1 + x1; // operation 2
        string x3 = x2 + x2; // operation 3
        string x4 = x3 + x3; // operation 4
        string x5 = x4 + x4; // operation 5
        
        if(subString(x0, s)) oper =0;
        else if(subString(x1, s)) oper =1;
        else if(subString(x2, s)) oper =2;
        else if(subString(x3, s)) oper =3;
        else if(subString(x4, s)) oper =4;
        else if(subString(x5, s)) oper =5;
        else oper = -1;
        cout << oper << endl;

    }
    return 0;
}