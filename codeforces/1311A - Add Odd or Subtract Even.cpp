//
#include<bits/stdc++.h>
using namespace std;


int main()
{
  
   int t; cin>>t;
   while(t--)
   {
     int a, b, res=0;; cin>>a>>b;
     if(a>b)
     {
       if((a-b)%2==0)
       {
         res = 1;
       }
       else
       {
         res = 2;
       }
     }
     else if(a<b)
     {
       if((a-b)%2!=0)
       {
         res = 1;
       }
       else
       {
         res = 2;
       }
     }
     else
     {
       res =0;
     }
     cout<<res<<'\n';
     
   }
    return 0;
}
