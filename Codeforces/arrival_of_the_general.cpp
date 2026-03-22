#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Find position of the first maximum from left
    int maxPos = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[maxPos]) {
            maxPos = i;
        }
    }

    // Find position of the last minimum from right
    int minPos = n - 1;
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] < a[minPos]) {
            minPos = i;
        }
    }

    // Moves needed:
    // Move max soldier to the front: maxPos swaps
    // Move min soldier to the back: (n - 1 - minPos) swaps
    int moves = maxPos + (n - 1 - minPos);

    // If maxPos > minPos, then after moving max to front,
    // min shifts one position left, so reduce one move
    if (maxPos > minPos) moves--;

    cout << moves << endl;
    return 0;
}
