//https://codeforces.com/problemset/problem/1560/A
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  int T; cin>>T;
  while(T--)
  {
    int k; cin>>k;
    int j=0;
    for(int i=1; i<=k;i++)
    {
      j++;
      if(i%3==0||i%10==3)
      {
        k=k+1;
      }
      
    }
    cout<<j<<endl;
  } 
  
  
  return 0;
}
