#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;

    int upperCount = 0, lowerCount = 0;

    // Count uppercase and lowercase letters
    for (char c : s) {
        if (isupper(c)) upperCount++;
        else lowerCount++;
    }

    // If lowercase letters are more, or equal convert to lowercase
    if (lowerCount >= upperCount) {
        for (char &c : s) c = tolower(c);
    } else {
        for (char &c : s) c = toupper(c);
    }

    cout << s << endl;
    return 0;
}
