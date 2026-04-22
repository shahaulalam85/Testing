#include <iostream>
using namespace std;
long long digitSum(long long n){
    long long s =0;
    while(n>0){
        s += n%10;
        n /= 10;
    }
    return s;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long x;
        cin >> x;
        int count =0;
        for(long long i=x; i<=x+90; i++ ){
            if(i-digitSum(i)==x){
                count ++;
            }
        }
        cout << count << endl;
    }
    return 0;
}