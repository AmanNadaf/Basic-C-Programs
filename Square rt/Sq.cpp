#include<iostream>
using namespace std;
#include<iomanip>
#include<math.h>
main()
{
    int t,n,i,r;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        r=sqrt(n);
        cout<<setprecision(0)<<r<<endl;
    }
    return 0;
}
