//https://codeforces.com/problemset/problem/1399/B
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  int T; cin>>T;
  while(T--)
  {
    int n;
    long long int sum=0; 
    cin>>n;
    int a[n],b[n],a1[n], b1[n];
    for(int i=0; i<n;i++)
    {
      cin>>a[i];
      a1[i]=a[i];
    }
    for(int i=0; i<n;i++)
    {
      cin>>b[i];
      b1[i]=b[i];
    }
      sort(a1, a1+n);
      sort(b1, b1+n);
      for(int i=0; i<n;i++)
    {
      b[i]= b[i]-b1[0];
      a[i]= a[i]-a1[0];
      sum += (min(a[i],b[i])+abs(a[i]-b[i]));
    }
    cout<<sum<<'\n';
  }
  
  return 0;
}
