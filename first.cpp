#include <iostream>
#include <string>
#include <vector>
#include <numeric>


void solve() {
    int n, k;
    std::cin >> n >> k;
    std::string s;
    std::cin >> s;

    int count_ones = 0;
    for (char c : s) {
        if (c == '1') {
            count_ones++;
        }
    }

    if (count_ones == 0) {
        std::cout << "Alice\n";
    } else if (count_ones <= k) {
        std::cout << "Alice\n";
    } else {
        if (2 * k > n) {
            std::cout << "Alice\n";
        } else {
            std::cout << "Bob\n";
        }
    }
}

int main() {
    // Fast I/O for competitive programming
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t; 
    while (t--) {
        solve();
    }

    return 0;
}
