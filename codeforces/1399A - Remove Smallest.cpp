//
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  int t; cin>>t;
  while(t--)
  {
    int n; cin>>n;
    int a[n], mrq=0;
    for(int i=0; i<n;i++)
    {
      cin>>a[i];
    }
    sort(a, a+n);
    if(n!=1)
    {
    for(int i=1; i<n;i++)
      {
        if(a[i]-a[i-1]>1)
        {
          mrq++;
        }
      }
    }
    else if(n==1)
    {
      mrq=0;
    }
    if(mrq>0)
    {
      cout<<"NO\n";
    }
    else
    {
      cout<<"YES\n";
    }
  }
  return 0;
  
}



