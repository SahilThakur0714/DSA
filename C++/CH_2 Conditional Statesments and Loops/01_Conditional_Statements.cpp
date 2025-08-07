#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter your age: ";
    cin >> n;

    if (n >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote." << endl;
    }

    return 0;
}
