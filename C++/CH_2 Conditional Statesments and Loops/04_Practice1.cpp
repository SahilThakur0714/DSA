#include<iostream>
using namespace std;

int main(){
    // Sum of numbers from 1 to n
    int n;
    cout << "Enter n: ";
    cin >> n;
    int sum = 0;
    int i = 0;
    while (i <= n)
    {
        sum += i;
        i++;
    }
   cout<<"Sum of first "<< n<<" natural numbers is "<< sum<<"\n"; 

   int sum1 = 0; 
   for(int j=1; j<=n;j++){
    sum1 += j;
    if(j == 5){
        break;
    }
   }
   cout<<"Sum of first "<< n <<" natural numbers is "<< sum1; 

 return 0;   
}