#include <iostream>
#include <algorithm>  // for sort and upper_bound
using namespace std;

int main() {
    int n;
    cin >> n;
    int prices[100000];  // maximum size as per constraints
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    // Sort prices for binary search
    sort(prices, prices + n);

    int q;
    cin >> q;
    while (q--) {
        int m;
        cin >> m;

        // upper_bound gives pointer to first element > m
        int count = upper_bound(prices, prices + n, m) - prices;
        cout << count << "\n";
    }

    return 0;
}
