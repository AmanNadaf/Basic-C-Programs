#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int choice2;
    do{
    int x,i,n,choice,fx=1;
    float m,p,e=2.718281828,px;
    cout<<"Find Poission Distribution for any Value of X... "<<endl;
    cout<<endl;
    cout<<"Enter 1 to Enter Mean(Given Directly) Enter 2 to find Mean(Not Given)..."<<endl;
    cout<<"Enter Your Choice..."<<endl;
    cin>>choice;
    if(choice==1)
    {
        cout<<"Enter The Mean.."<<endl;
        cin>>m;
    }
    else if(choice==2)
    {
        cout<<"Enter Value of p(probability).."<<endl;
        cin>>p;
        cout<<"Enter Value of n(No of Trials).."<<endl;
        cin>>n;
        m=n*p;
    }
    else
    cout<<"Invalid Choice..."<<endl;
    cout<<"Enter The Value Of X..."<<endl;
    cin>>x;
    for(i=1;i<=x;i++)
    {
        fx=fx*i;
    }
    px=(pow(m,x)*pow(e,-m))/fx;
    cout<<"The Poison Distribution p(x)= "<<px<<endl;
    cout<<endl;
    cout<<"MEAN = "<<m<<endl;
    cout<<"VARIANCE = "<<m<<endl;
    cout<<"STANDARD DEVIATION = "<<sqrt(m)<<endl;
    cout<<endl;
    cout<<"Enter 1 to Stop or any Number to Continue..."<<endl;
    cin>>choice2;
    }
    while(choice2!=1);
}
