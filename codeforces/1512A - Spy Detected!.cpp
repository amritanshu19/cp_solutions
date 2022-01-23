//https://codeforces.com/problemset/problem/1512/A
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  int t; cin>>t;
  while(t--)
  {
    int n; cin>>n;
    int a[n], b[n], rev=0;
    for (int i=0; i<n; i++)
    {
      cin>>a[i];
      b[i]=a[i];
    }
    sort(b, b+n);
    if(b[0]!=b[1])
    {
      rev=b[0];
    }
    else
    {
      rev=b[n-1];
    }
    for (int i=0; i<n; i++)
    {
      if(a[i]==rev)
      {
        cout<<i+1<<endl;
      }
    }
  }
  return 0;
}
