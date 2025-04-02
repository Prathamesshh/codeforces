#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    for (int i = 0; i < n - 1 && k > 0; i++) {
        if (s[i] == '0' && s[i + 1] == '1') {
            s[i] = '1';
            k--;
            if (k == 0) break;
            
            i = max(-1, i - 2);
        }
    }

    int cnt = count(s.begin(), s.end(), '1');
    cout << cnt << endl;
	}

}
