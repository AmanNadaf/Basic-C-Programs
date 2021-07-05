#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int choice=0;
    do{
    int i,n,x,fn=1,fx=1,fxn=1,nx,cas;
    float px,p,q;
    cout<<"Find The Binomial Distribution p(x) for any Value of X...!!"<<endl;
    cout<<endl;
    cout<<"Enter the Value of n(No of Trials).."<<endl;
    cin>>n;
    cout<<"Enter the Value of p(Probability of Sucess).."<<endl;
    cin>>p;
    cout<<"Enter the Value of q(Probability of Failure).."<<endl;
    cin>>q;
    cout<<"Enter the Value of x.."<<endl;
    cin>>x;
    nx=n-x;
    for(i=1;i<=n;i++)
    {
        fn=fn*i;
    }
    for(i=1;i<=x;i++)
    {
        fx=fx*i;
    }
    for(i=1;i<=nx;i++)
    {
        fxn=fxn*i;
    }
    px=(fn/(fxn*fx))*pow(p,x)*pow(q,nx);
    cout<<"The Binomial Distribution of given Data is ="<<px<<endl;
    cout<<endl;
    cout<<"Enter How Many Binomial Distributions to be found..."<<endl;
    cin>>cas;
    cout<<"The Total No Of Binomial Distributions for "<<cas<<"="<<cas*px<<endl;
    cout<<endl;
    cout<<"MEAN ="<<n*p<<endl;
    cout<<"VARIENCE ="<<n*p*q<<endl;
    cout<<"STANDARD Deviation ="<<sqrt(n*p*q)<<endl;
    cout<<"\nPress 1 to Stop or any number to Continue.."<<endl;
    cout<<"Enter ur Choice"<<endl;
    cin>>choice;
    }
    while(choice!=1);
}
