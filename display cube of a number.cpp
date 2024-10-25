#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Number: " << i << ", Cube: " << (i * i * i) << endl;
    }

    return 0;
}