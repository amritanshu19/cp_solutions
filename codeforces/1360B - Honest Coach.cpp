//https://codeforces.com/problemset/problem/1360/B
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  int T; cin>>T;
  while(T--)
  {
    int n;
    cin>>n;
    int s[n];
    for(int i=0; i<n;i++)
    {
      cin>>s[i];
    }
    sort(s,s+n);
    int mnum = s[n-1]-s[0];
    for(int i=0; i<n-1;i++)
    {
      mnum = min(mnum,abs(s[i+1]-s[i]));
    }
    cout<<mnum<<'\n';
  }
  
  return 0;
}
