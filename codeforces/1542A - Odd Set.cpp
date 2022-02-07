#include <bits/stdc++.h>
using namespace std;


int main()
{
   int t; cin>>t;
   while(t--)
   {
      int n, od1 = 0, ev1 =0;
      cin>>n;
      int a[2*n];
      for(int i=0; i<2*n;i++)
      {
         cin>>a[i];
         if(a[i]%2!=0)
         {
            od1++;
         }
      }
      if(od1==n)
      {
         cout<<"YES\n";
      }
      else
      {
         cout<<"NO\n";
      }
   }
    return 0;
}
