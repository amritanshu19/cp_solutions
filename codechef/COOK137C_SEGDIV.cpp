//https://www.codechef.com/problems/SEGDIV

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  int T; cin>>T;
  while(T--)
  {
    int N;
    cin>>N;
    int A[N];
    for(int i=0; i<N;i++)
    {
      if(i%2==0)
      {
      A[i]=2*i+1;
      }
      else
      {
        A[i]=2*i;
      }
      cout<<A[i]<<' ';
    }

  }
  
  return 0;
}
