//https://codeforces.com/problemset/problem/1520/A
#include<bits/stdc++.h>


using namespace std;
 
int main()
{
  int T; cin>>T;
  while(T--)
  {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int k=0;
    for(int i=0; i<n-1;i++)
    {
      for(int j=i+1; j<n-1;j++)
      {
        if(s[i]==s[j+1]&&s[i]!=s[j])
        {
          k++;
        }
      }
    }
    if(k>0)
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
