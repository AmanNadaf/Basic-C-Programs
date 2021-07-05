#include<iostream>
using namespace std;
main()
{
    int t,a[100],i,j,temp;
    cout<<"Enter The the Total Elements u want to Enter...!!!"<<endl;
    cin>>t;
    cout<<"Enter The the Elements One By one...!!!"<<endl;
    for(i=0;i<t;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<t;i++)
    {
        for(j=0;j<t;j++)
        {
            if(a[j]>a[j+1])
               {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
               }
        }
    }
    cout<<"The Sorted List is...."<<endl;
    for(i=0;i<t;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
