//https://codeforces.com/contest/1385/problem/B
#include<bits/stdc++.h>
using namespace std;


int main()
{
  
   int t; cin>>t;
   while(t--)
   {
     int n; cin>>n;
     int a[2*n];
     vector<int>p;
     int j=0;
     for(int i=0; i<2*n;i++)
     {
       int y=0;
       cin>>a[i];
       for(j=0; j<i;j++)
        {
          if(a[j]==a[i])
          {
            y++;
          }
        }
        if(y==0)
        {
          p.push_back(a[i]);
        }
        j =0;
        y=0;
     }
     for(int i=0; i<p.size();i++)
     {
       cout<<p[i]<<' ';
     }
     cout<<'\n';
   }
    return 0;
}
