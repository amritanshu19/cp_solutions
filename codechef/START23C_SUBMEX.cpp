//https://www.codechef.com/START23C/problems/SUBMEX
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  
    int T; cin>>T;
    while(T--)
    {
      int N, K, X;
      cin>>N>>K>>X;
      if(K>=X)
      {
      int A[N], j=0;
      for(int i=0; i<N; i++)
      {
        if(j<X)
        {
        A[i]=j;
        j++;
        }
        else
        {
          j=0;
          A[i]=j;
          j++;
        }
      }
      for(int i=0; i<N; i++)
      {
        cout<<A[i]<<' ';
      }
      cout<<'\n';
      }
      else
      {
        cout<<-1<<'\n';
      }
    }
    return 0;
    
}
