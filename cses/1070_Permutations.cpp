//https://cses.fi/problemset/task/1070/
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int s[n];
    if(n>3)
    {
    for(int i=1; i<=n;i++)
    {
      if(i<=n/2)
      {
        s[i]=2*i;
      }
      else
      {
        s[i]=2*(i-n/2)-1;
      }
      cout<<s[i]<<' ';
    }
    }
    else if(n==1)
    {
      cout<<1<<endl;
    }
    else
    {
      cout<<"NO SOLUTION\n";
    }
    
  
  
  return 0;
}
