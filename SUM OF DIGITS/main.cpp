#include<iostream>
using namespace std;
main()
{
     int T,N,i;
     cin>>T;
     if(T>=1&&T<=1000)
     {
        for(i=0;i<T;i++)
        {
          int S=0;
          cin>>N;
         if(N>=1&&N<=1000000)
         {
            while(N!=0)
           {
                S=S+N%10;
                N=N/10;
           }
         }
         cout<<S<<endl;
        }
     }
      return 0;
}
