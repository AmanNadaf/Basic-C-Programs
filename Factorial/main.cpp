#include<iostream>
using namespace std;
main()
{
    int n,t,j,i;
    cout<<"how many numbers u want Factorial of...?"<<endl;
    cin>>t;
    if(t>=1&&t<=100)
 {

    for(i=0;i<t;i++)
    {
        int f=1;
        cout<<"Enter The Number u want Factorial of....!!!!"<<endl;
        cin>>n;
        if(n>=1&&n<=100)
       {
        for(j=1;j<=n;j++)
        {
            f=f*j;
        }
        cout<<"The Factorial of "<<n<<" is "<<f<<endl;
       }
     }
}
return 0;
}
