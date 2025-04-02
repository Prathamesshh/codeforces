#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

long long powerCal(long long base, long long exp, long long mod) {
    long long res = 1;
    while (exp > 0) {
        if (exp & 1) res = res * base % mod;
        base = base * base % mod;
        exp >>= 1;
    }
    return res;
}

int main(){
    int t;  
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long res = 0;
        if(n & 1) {  
            res = powerCal(2, n - 1, MOD);
        } else {
            res = (3 * powerCal(2, n - 2, MOD))% MOD;
        }
        cout << res <<endl;
    }
    return 0;
}

