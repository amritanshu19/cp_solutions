//https://codeforces.com/problemset/problem/1353/A
#include<bits/stdc++.h>
using namespace std;


int main()
{
  
    int t; cin>>t;
    while(t--)
    {
      int m, n; cin>>n>>m;
      long long int res = 0;
      if(n==1)
      {
        res =0;
      }
      else if(n==2)
      {
        res = m;
      }
      else 
      {
        res = m*1ll*(min(n-1, 2));
      }
      

      cout<<res<<'\n';
    }
    return 0;
}
