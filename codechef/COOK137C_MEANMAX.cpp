//https://www.codechef.com/COOK137C/problems/MEANMAX
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
    unsigned long long sum =0;
    for(int i=0; i<N;i++)
    {
      cin>>A[i];
      sum+=A[i];
    }
    sort(A,A+N);
    double ans = (1.0*(sum-A[N-1]))/(N*1ll-1);
    ans+=A[N-1];
    cout<<setprecision(12)<<fixed;
    cout<<ans<<'\n';

  }
  
  return 0;
}
