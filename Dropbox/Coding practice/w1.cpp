#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> multiply(vector<vector<int>> &A, vector<vector<int>> &B){
    int rA = A.size();
    int cA = A[0].size(); // rA x cA

    int rB = B.size();
    int cB = B[0].size(); // rB(==cA) x cB

    vector<vector<int>> R(rA, vector<int>(cB,0));
    for(int i=0; i<rA; i++){
        int sum =0;
        for(int j=0; j<cB; j++){
           for(int k=0; k<cA; k++){
                sum += A[k][i] * B[j][k];
           }
           R[i][j] = sum;
        }
    }
    return R;
}

int main(){
    vector<int> a = {10,20,30};
    vector<int> b = {50,60,80};
    vector<int> c = {2, 3, 4};

    vector<vector<int>> v1;
    v1.push_back(a);
    v1.push_back(b);
    v1.push_back(c);

    vector<int> d = {10,20,30};
    vector<int> e = {50,60,80};
    vector<int> f = {2, 3, 4};

    vector<vector<int>> v2;
    v2.push_back(d);
    v2.push_back(e);
    v2.push_back(f);

    vector<vector<int>> ans = multiply(v1, v2);
    for(int i=0; i<ans.size(); i++){
        for(int j=0;j<ans.size(); j++){
            cout<< ans[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}