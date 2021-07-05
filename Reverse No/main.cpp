#include<iostream>
using namespace std;
main()
{
    int t,n,i;
    cout<<"Enter The total number of elements u want to Reverse..?"<<endl;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cout<<"Enter The Number to Reverse.."<<endl;
        cin>>n;
        int r=0;
        while(n!=0)
        {
            r=r*10+n%10;
            n=n/10;
        }
        cout<<r<<endl;
    }
    return 0;
}
