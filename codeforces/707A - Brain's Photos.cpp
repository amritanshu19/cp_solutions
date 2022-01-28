//https://codeforces.com/problemset/problem/707/A
#include<bits/stdc++.h>
using namespace std;


int main()
{
  
    int n, m, k=0; cin>>n>>m;
    char A[n][m];
    for(int i=0; i<n;i++)
    {
      for(int j=0; j<m;j++)
      {
        cin>>A[i][j];
        if(A[i][j]=='W'||A[i][j]=='B'||A[i][j]=='G')
        {
          k++;
        }
      }
    }
    if(k<n*m)
    {
      cout<<"#Color\n";
    }
    else
    {
      cout<<"#Black&White\n";
    }
    
}
