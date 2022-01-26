//https://codeforces.com/problemset/problem/1472/B
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  
    int t; cin>>t;
    while(t--)
    {
      int n; cin>>n;
      int a[n], sum =0;
      for(int i=0; i<n; i++)
      {
        cin>>a[i];
        sum+=a[i];
      }
      bool al = sum/2==n&&n%2!=0;
      if(sum%2==0&&!al)
      {
        cout<<"YES\n";
      }
      else
      {
        cout<<"NO\n";
      }
    }
    return 0;
    
}
