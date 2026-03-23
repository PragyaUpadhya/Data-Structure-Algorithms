#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int a[100005];        // pile sizes
    int prefix[100005];   // prefix sums

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i == 0) prefix[i] = a[i];
        else prefix[i] = prefix[i-1] + a[i];
    }

    int m;
    cin >> m;
    while (m--) {
        int q;
        cin >> q;

        // Manual binary search to find smallest prefix >= q
        int l = 0, r = n-1, ans = n-1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (prefix[mid] >= q) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        cout << ans + 1 << "\n"; // pile index is 1-based
    }

    return 0;
}
