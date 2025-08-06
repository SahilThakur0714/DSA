#include<iostream>
using namespace std;

int main()
{
    // // // datatype
    int age=19;
    cout<<sizeof(age)<<endl;
    float PI=3.14f;
    cout<<PI<<"\n";
    cout<<sizeof(PI)<<endl;
    cout <<"Hello guys\n i am the best\n";
    cout<<"end of line"<<endl;

    // // // // input in c++
    int age;
    cout<<"enter your age: ";
    cin>>age;
    cout<<"your age is : " << age<<endl;

    // // // // type casting = to covert data from one type to another
    double price=100.99;
    int newprice = (int)price;
    cout<< newprice<<endl;

    char grade ='a';
    int value = grade;
    cout<< value<<endl;
    cout<<sizeof(grade)<<endl;

    // // // // operators
    // // // // relational
    cout<< (3<5)<<endl;
    cout<< (3>5)<<endl;
    cout<< (3<=5)<<endl;
    cout<< (3==5)<<endl;
    cout<< (3==3)<<endl;

    // // // // arithmatic
    int a=5, b=10;
    int sum=a+ b;
    cout<<"sum = "<<sum<<endl;
    cout<<"difference ="<<(a-b)<<endl;
    cout<<"product ="<<(a*b)<<endl;
    cout<<"division ="<<(float)a/b<<endl;
    cout<<"division ="<<(a/(double) b)<<endl;
    cout<<"remainder ="<<(a%b)<<endl;

    // // //  // logical or=||, and=&&, not=!
    cout<<( !(3<5) || (3>1))<<endl;
    cout<<( !(3<5) && (3>1))<<endl;

    // // // // sum of 2 number
    int a,b,sum;
    cout<<"enter value of a: ";
    cin>>a;

    cout<<"enter value of b: ";
    cin>>b;

    sum = a + b;
    cout<<"sum of a and b is: "<<sum<<endl;

    // // // unary operators
    // increment++: a++: a=a+1
    int a = 10;
    int c = 7;
    int d = --c;
    cout<<d<<endl;
    cout<<c<<endl;

    int b = a++;
    cout<<b<<endl;
    cout<<a<<endl;
    return 0;

}
