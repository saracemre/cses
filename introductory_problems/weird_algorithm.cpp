#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <utility>

using namespace std;

#define int long long
const int MOD = 1e9+7;

void solve() {
    int n;
    cin >> n;
    while (n != 1) {
        cout << n << ' ';
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = n * 3 + 1;
        }
    }
    cout << n << '\n';
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