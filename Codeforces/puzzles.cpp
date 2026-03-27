#include<iostream>
#include<algorithm> // for sort
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;   // n = number of puzzles to buy, m = total puzzles in shop
    int f[1000];     // array to store puzzle sizes (safe upper bound)

    // Input puzzle sizes
    for (int i = 0; i < m; i++) {
        cin >> f[i];
    }

    // Step 1: Sort the puzzle sizes
    sort(f, f + m);

    // Step 2: Slide a window of size n and calculate differences
    int ans = 1000000000; // large initial value
    for (int i = 0; i + n - 1 < m; i++) {
        int diff = f[i + n - 1] - f[i]; // largest - smallest in this window
        if (diff < ans) ans = diff;     // keep track of minimum difference
    }

    // Step 3: Output the answer
    cout << ans << endl;
    return 0;
}
