#include <iostream>
using namespace std;

void printnTO1(int n);
void print1TOn(int start, int end);
void print(int n);

int main() {
    int start, end;
    cout << "Enter the starting: ";
    cin >> start;

    cout << "Enter the end: ";
    cin >> end;

    cout << "The numbers from 1 to " << end << ":\n";
    print(end);
    cout << "\n\n";

    cout << "The numbers from " << end << " to 1:\n";
    printnTO1(end);
    cout << "\n\n";

    cout << "The numbers from " << start << " to " << end << ":\n";
    print1TOn(start, end);
    cout << endl;

    return 0;
}

void printnTO1(int n) {
    if (n == 0) return;
    cout << " " << n;
    printnTO1(n - 1);
}

void print1TOn(int n, int num) {
    if (n > num) return;
    cout << " " << n;
    print1TOn(n + 1, num);
}

void print(int n) {
    if (n == 0) return;
    print(n - 1);
    cout << " " << n;
}
