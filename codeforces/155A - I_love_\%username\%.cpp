//https://codeforces.com/problemset/problem/155/A
#include<bits/stdc++.h>
using namespace std;


int main()
{
  int n, m1, m2, amz=0;
  cin>>n;
  vector<int>a;

  for(int i=0; i<n;i++)
  {
    int k;
    cin>>k;
    a.push_back(k);
    if(i==0)
    {
      m1=a[0], m2 = a[0];
    }
    else{
      if(a[i]<m2||a[i]>m1)
      {
        amz++;
        m2 = min(m2, a[i]);
        m1 = max(m1, a[i]);
      }
    }

  }
  cout<<amz<<'\n';
  return 0;
}
