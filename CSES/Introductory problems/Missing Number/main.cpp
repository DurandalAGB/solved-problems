#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long sumaTotal = n * (n + 1) / 2;
    long long sumaEntrada = 0;

    for (int i = 0; i < n - 1; i++) {
        long long num;
        cin >> num;
        sumaEntrada += num;
    }

    cout << sumaTotal - sumaEntrada << endl;

    return 0;
}
