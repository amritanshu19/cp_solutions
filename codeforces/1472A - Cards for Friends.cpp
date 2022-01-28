//https://codeforces.com/problemset/problem/1472/A
#include<bits/stdc++.h>
using namespace std;


int main()
{
  
    int t; cin>>t;
    while(t--)
    {
      int w, h,n,wn=0, hn=0; cin>>w>>h>>n;
      while(w%2==0||h%2==0&&w!=0&&h!=0)
      {
        if(w%2==0)
        {
          wn++;
          w = w/2;
        }
        else if(h%2==0)
        {
          hn++;
          h = h/2;
        }
      }
      if(pow(2,wn)*pow(2,hn)>=n)
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
