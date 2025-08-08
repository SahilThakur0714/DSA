#include<iostream>
using namespace std;

int main(){
    // Sum of all odd numbers 1 to 
    int n;
    cout<<"Enter n: ";
    cin >> n;
    int odd_sum = 0;
    // for(int i=1; i <= n; i+=2){
    //     odd_sum += i;
    // }
    // cout<<"sum of odd number from 1 to "<<n<<" is "<<odd_sum;
    
    for(int i=1; i<=n; i++){
        if(i%2!=0){
            odd_sum += i;
        }
    }
    cout<<"sum of odd number from 1 to "<<n<<" is "<<odd_sum;
    return 0;
}