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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v1(n);
    vector<int> v2(m);

    for (int i = 0; i < n; i++)
        cin >> v1[i];
    for (int i = 0; i < m; i++)
        cin >> v2[i];

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    int result = 0;
    int j = 0;
    for (int i = 0; i < n; i++) {
        while (j < m) {
            if (v1[i]+k < v2[j]) {
                break;
            }
            if (v1[i]-k <= v2[j] && v1[i]+k >= v2[j]) {
                result++;
                j++;
                break;
            }
            j++;
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