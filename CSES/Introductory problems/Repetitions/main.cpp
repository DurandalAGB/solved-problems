#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();
    int max_racha = 1;
    int actual_racha = 1;

    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            actual_racha++;
        } else {
            actual_racha = 1;
        }

        if (actual_racha > max_racha) {
            max_racha = actual_racha;
        }
    }
    cout << max_racha << endl;
}
