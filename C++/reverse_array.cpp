#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int std[n];

    cout << "Enter all elements of array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i << ": ";
        cin >> std[i];
    }

    cout << "Entered elements of array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << std[i] << " ";
    }

    // Proper reverse using one loop
    for (int i = 0; i < n / 2; i++) {
        int temp = std[i];
        std[i] = std[n - i - 1];
        std[n - i - 1] = temp;
    }

    cout << "\n\nElements of array in reversed order:" << endl;
    for (int i = 0; i < n; i++) {
        cout << std[i] << " ";
    }

    return 0;
}
