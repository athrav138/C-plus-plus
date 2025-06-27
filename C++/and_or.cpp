#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if ((num % 5 == 0 || num % 3 == 0) && num % 15 != 0) {
        cout << "The number is divisible by 3 or 5, but not divisible by 15: " << num << endl;
    } else {
        cout << "The number does not satisfy the condition (either not divisible by 3 or 5, or divisible by 15): " << num << endl;
    }

    return 0;
}
