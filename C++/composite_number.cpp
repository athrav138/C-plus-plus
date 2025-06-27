#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter n: ";
    cin >> n;

    if (n == 1) {
        cout << "1 is neither a prime number nor a composite number.\n";
        return 0; // no need to check further
    }

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            cout << n << " is a composite number.\n";
            count++;
            break;
        }
    }

    if (count == 0) {
        cout << n << " is not a composite number (it is a prime number).\n";
    }

    return 0;
}
