// Write a C++ function power(int, int, int &) that takes two integer variables (say a and b) and a integer reference variable as parameter, computes a ^ b and stores the result in the reference variable. Write the associated main() to call this function.
#include<iostream>
using namespace std;
#include<math.h>
int power(int a, int b, int r)
{
    r=pow(a,b);
    cout<<"The Value of "<<a<<"^"<<b<<"="<<r;
}
main()
{
    int a,b,r;
    cout<<"Enter the Value Of a and b...!!!"<<endl;
    cin>>a>>b;
    power(a , b, r);
}
