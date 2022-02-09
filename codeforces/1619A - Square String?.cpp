#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t; cin>>t;
   while(t--)
   {
      string s; cin>>s;
      int n = s.size();
      if(n%2==0)
      {
         int ct =0;
         for(int i=0; i<n/2;i++)
         {
            if(s[i]!=s[n/2+i])
            {
               ct++;
            }
         }
         if(ct==0)
         {
            cout<<"YES\n";
         }
         else
         {
            cout<<"NO\n";
         }

      }
      else
      {
         cout<<"NO\n";
      }
   }
   return 0;

}
