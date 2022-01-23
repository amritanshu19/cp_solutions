//https://atcoder.jp/contests/abc236/tasks/abc236_b
#include<iostream>
using namespace std;
 
int main()
{
  int N;
  cin>>N;
  int A[4*N-1];
  unsigned long long sum =0;
  for(int i=0;i<4*N-1;i++)
  {
    cin>>A[i];
    sum+=A[i];
  }
  cout<<2*1ull*N*(N+1)-sum<<endl;
  return 0;
}
