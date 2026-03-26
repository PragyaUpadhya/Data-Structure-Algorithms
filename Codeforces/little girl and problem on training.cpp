#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100005], b[100005];  // since n ≤ 1e5

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    // Sort the copy
    sort(b, b + n);

    // Find mismatch boundaries
    int l = 0, r = n - 1;
    while (l < n && a[l] == b[l]) l++;
    while (r >= 0 && a[r] == b[r]) r--;

    if (l >= r) {
        cout << "yes\n1 1\n";
        return 0;
    }

    // Reverse the segment [l, r]
    reverse(a + l, a + r + 1);

    // Check if sorted
    bool ok = true;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            ok = false;
            break;
        }
    }

    if (ok) {
        cout << "yes\n" << l + 1 << " " << r + 1 << "\n";
    } else {
        cout << "no\n";
    }

    return 0;
}
