// Write a C++ program to swap two variables using references variables.
#include<iostream>
using namespace std;
main()
{
    int a,b,t;
    cout<<"Enter The Two Numbers a and b....!!!"<<endl;
    cin>>a>>b;
    cout<<"The Two Numbers Before Swapping is  a="<<a<<" b="<<b<<endl;
    t=a;
    a=b;
    b=t;
    cout<<"The Two Numbers After Swapping is  a="<<a<<" b="<<b<<endl;
    return 0;
}
