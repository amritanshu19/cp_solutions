//https://codeforces.com/problemset/problem/1371/A
#include<bits/stdc++.h>
using namespace std;


int main()
{
  
    int t; cin>>t;
    while(t--)
    {
      int n; cin>>n;
      if(n%2==0)
      {
        cout<<n/2<<'\n';
      }
      else
      {
        cout<<n/2+1<<'\n';
      }
    }
    return 0;
    
}
