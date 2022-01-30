
#include<bits/stdc++.h>
using namespace std;


int main()
{
  
   int t; cin>>t;
   while(t--)
   {
     int n; cin>>n;
     int a[n];
     for(int i=1; i<=n; i++)
     {
       if(n%2==0)
       {
       if(i%2==0)
       {
         a[i-1]=i-1;
       }
       else
       {
         a[i-1]=i+1;
       }
       }
       else
       {
          if(i%2==0)
       {
         a[i-1]=i-1;
       }
       else
       {
         a[i-1]=i+1;
       }
       }
     }
     if(n%2!=0)
     {
       a[0]=n;
       a[n-1]=2;
     }
     for(int i=0; i<n; i++)
     {
       cout<<a[i]<<' ';
     }
     cout<<'\n';
   }
    return 0;
}
