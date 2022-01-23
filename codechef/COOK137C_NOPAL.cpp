//
#include<bits/stdc++.h>


using namespace std;
 
int main()
{
  int T; cin>>T;
  while(T--)
  {
    int N;
    cin>>N;
    string s;
    char yo = 'a', zo = 'A';
    for(int i=1; i<=N; i++)
    {
       s+=yo;
       yo++;
       if(i%26==0)
       {
         yo = 'a';
       }
    }
    cout<<s<<endl;

  }
  
  return 0;
}
