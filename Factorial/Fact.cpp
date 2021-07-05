#include<iostream>
using namespace std;
main()
{
    int n,t,j,i;
    cin>>t;
    if(t>=1&&t<=100)
 {

    for(i=0;i<t;i++)
    {
        int f=1;
        cin>>n;
        if(n>=1&&n<=100)
       {
        for(j=1;j<=n;j++)
        {
            f=f*j;
        }
        cout<<f<<endl;
       }
     }
}
return 0;
}
