//https://codeforces.com/problemset/problem/381/A
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  
    int n; cin>>n;
    vector<int>A;
    for(int i=0; i<n;i++)
    {
      int l; cin>>l;
      A.push_back(l);
    }
    int ser =0, dim =0;
    for(int i=0; i<n; i++)
    {
      if(i%2==0)
      {
        ser+=max(A[0],A[A.size()-1]);
        if(A[0]>A[A.size()-1])
        {
          reverse(A.begin(),A.end());
          A.pop_back();
          reverse(A.begin(),A.end());
        }
        else
        {
          A.pop_back();
        }
      }
      else
      {
        dim+=max(A[0],A[A.size()-1]);
        if(A[0]>A[A.size()-1])
        {
          reverse(A.begin(),A.end());
          A.pop_back();
          reverse(A.begin(),A.end());
        }
        else
        {
          A.pop_back();
        }
      }
    }
    cout<<ser<<' '<<dim<<'\n';
    return 0;
    
}
