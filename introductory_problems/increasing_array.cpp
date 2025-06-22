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
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int result = 0;
    for (int i = 1; i < n; i++) {
        if (v[i] < v[i-1]) {
            result += v[i-1] - v[i];
            v[i] = v[i-1];
        }
    }
    cout << result << '\n';
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