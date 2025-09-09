#include <iostream>
using namespace std;

int main() {
    int X;

    cout << "Enter passwords one by one until you get the correct one:" << endl;

    while (cin >> X) {
        if (X == 1999) {
            cout << "Correct" << endl;
            break;
        } else {
            cout << "Wrong, try again: " << endl;
        }
    }

    return 0;
}
