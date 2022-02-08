#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t; cin>>t;
   while(t--)
   {
      int a, b, c;
      cin>>a>>b>>c;
      int n = 2*abs(b-a), res = 0;
      if(n>=a&&n>=b&&n>=c)
      {
         int k1 = c - n/2;
         int k2 = c + n/2;
         if(k1>=1&&k1<=n)
         {
            res = k1;
         }
         else
         {
            res = k2;
         }
      }
      else
      {
         res = -1;
      }
      cout<<res<<"\n";
   }
   return 0;

}
