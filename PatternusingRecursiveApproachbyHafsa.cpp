#include <iostream>
using namespace std;

void generatePattern(int n, int remaining, string current) {
    if (remaining == 0) {
        cout << current << endl;
        return;
    }

    for (int i = n; i >= 1; i--) {
        if (i <= remaining) {
            string updated = current + char('0' + i) + " ";
            generatePattern(n, remaining - i, updated);
        }
    }
}

int main() {
    int n=4;
//    cout << "Enter a number: ";    if u want generic then only write int n and input any number
//    cin >> n;

    generatePattern(n, n, "");

    return 0;
}
