#include<iostream>
using namespace std;
main()
{
    int t,a[10],i,j,temp;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<t-1;i++)
    {
        for(j=0;j<t-i-1;j++)
        {
            if(a[j]>a[j+1])
               {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
               }
        }
        cout<<a[i]<<endl;
    }
    return 0;
}
