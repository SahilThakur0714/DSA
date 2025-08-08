// Check if a number is prime or not

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    bool isPrime = true;

    if (n <= 1) {
        isPrime = false;
    } else {
        // for(int i = 2; i < n; i++) {
        for(int i = 2; i * i <= n; i++) {
            if(n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << n << " is prime" << endl;
    else
        cout << n << " is not prime" << endl;

    return 0;
}