#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int t; cin>>t;
   while(t--)
   {
      string s; cin>>s;
      string s1; cin>>s1;
      int t =0;
      for(int i=1; i<s1.size();i++)
      {
         int v1=0, v2=0;
         for(int j=0; j<26;j++)
         {
            if(s[j]==s1[i-1])
            {
               v1 = j;
            }
            
            if(s[j]==s1[i])
            {
               v2 = j;
            }
         }
         t+=abs(v2 - v1);
      }
      cout<<t<<"\n";
   }
   return 0;
 
}
