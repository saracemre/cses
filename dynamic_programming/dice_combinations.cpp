#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <queue>
#include <stack>
#include <utility>

using namespace std;

#define int long long
const int MOD = 1e9+7;

int dice(int n, vector<int> nums) {
    unordered_map<int, int> mp;
    mp[0] = 1;
    for (int i = 1; i < n+1; i++) {
        for (auto& num: nums) {
            if (i-num >= 0) {
                mp[i] += mp[i-num];
                mp[i] = mp[i] % MOD;
            }
        }
        
    }
    return mp[n];
    
}

void solve() {
    int n;
    cin >> n;

    vector<int> vec = {1, 2, 3, 4, 5, 6};
    cout << dice(n, vec) << '\n';
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