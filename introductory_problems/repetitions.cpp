#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <utility>
#include <algorithm>

using namespace std;

#define int long long
const int MOD = 1e9+7;

void solve() {
    string s;
    cin >> s;
    int n = s.length();

    int mx = 1;
    int result = 1;
    char c = s[0];
    for (int i = 1; i < n; i++) {
        if (s[i] == c) {
            result++;
            mx = max(result, mx);
        } else {
            mx = max(result, mx);
            result = 1;
        }
        c = s[i];
    }
    cout << mx << '\n';
}

signed main () {
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) solve();

    return 0;
}