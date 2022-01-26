//https://codeforces.com/problemset/problem/1433/A
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  int t; cin>>t;
  while(t--)
  {
    int x; cin>>x;
    
      vector<int>A;
      while(x>0)
      {
        A.push_back(x%10);
        x = x/10;
      }
      int sum =0, j=1, k = A.size();
      while(k--)
      {
        sum +=j;
        j++;
      }
      cout<<(A[0]-1)*10+sum<<endl;
    
  }
    return 0;
}
