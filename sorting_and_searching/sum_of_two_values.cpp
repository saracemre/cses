#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    unordered_map<int, int> index_map; // To store the value and its position

    for (int i = 1; i <= n; ++i) {
        int a;
        cin >> a;
        int complement = x - a;

        // Check if the complement exists in the map
        if (index_map.find(complement) != index_map.end()) {
            cout << index_map[complement] << " " << i << endl;
            return 0;
        }
        index_map[a] = i; // Store the value and its position
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}
