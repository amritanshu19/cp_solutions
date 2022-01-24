//https://codeforces.com/problemset/problem/1360/A
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  int T; cin>>T;
  while(T--)
  {
    int a, b, c; cin>>a>>b;
    c = min(max(a,2*b),max(b,2*a));
    cout<<c*c*1ll<<'\n';
    
  }
  
  return 0;
}
