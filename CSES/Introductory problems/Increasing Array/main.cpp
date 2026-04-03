#include <iostream>
#include <numeric>
using namespace std;

int main() {
    long long n;
    long long max_actual;
    long long x;
    long long total_moves = 0;

    cin >> n;
    cin >> max_actual;

    for (int i = 1; i < n; i++) {
        cin >> x;
        if (x < max_actual) {
            total_moves += ( max_actual - x);

        } else {
            max_actual = x;
        }
    }

    cout << total_moves << endl;
    return 0;
}
