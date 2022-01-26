//https://www.codechef.com/problems/REPEAT
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int T; cin>>T;
    while(T--)
    {
      int N, K, S;
      cin>>N>>K>>S;
      int sum = S - N*N;
      for(int i=1; i<=2*N;i++)
      {
        if(i%2!=0)
        {
          if(sum/i==K-1&&sum%i==0)
          {
          cout<<i<<'\n';
          break;
          }
        }
      }
    }
  return 0;
}
