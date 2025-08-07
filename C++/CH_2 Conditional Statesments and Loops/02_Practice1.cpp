#include <iostream>
using namespace std;

int main() {
    char n;
    cout << "Enter a character: ";
    cin >> n;

    if (n >= 'a' && n <= 'z') {
        cout << "Lower case" << endl;
    } else if (n >= 'A' && n <= 'Z') {
        cout << "Upper case" << endl;
    } else {
        cout << "Not an alphabet character" << endl;
    }

    return 0;
}
