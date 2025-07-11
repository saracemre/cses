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
    if (n == 1) {
        cout << 1 << '\n';
        return;
    }
    if (n < 4) {
        cout << "NO SOLUTION\n";
        return;
    }
    for (int i = 2; i <= n; i+=2) {
        cout << i << ' ';
    }
    for (int i = 1; i <= n; i+=2) {
        cout << i << ' ';
    }
    
    cout << '\n';
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