#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>


using namespace std;

#define int long long
const int MOD = 1e9+7;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a <= x/2)
            v1.push_back(a);
        else
            v2.push_back(a);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    int s1 = v1.size();
    int s2 = v2.size();

    int ans = 0;
    int counter = 0;
    int j = 0;
    for (int i = s1-1; i >= 0; i--) {
        if (j < s2) {
            if (v1[i]+v2[j] <= x) {
                j++;
                ans++;
            } else {
                counter++;
            }
        } else {
            counter++;
        }
    }
    if (counter % 2 == 0)
        ans += counter/2 + s2-j;
    else
        ans += (counter+1)/2 + s2-j;

    cout << ans << '\n';
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