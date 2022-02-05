#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s, p, s1, s2, s3, s4, s5;
    cin>>s>>s1>>s2>>s3>>s4>>s5;
    int ct =0;
    
       if(s1[0]==s[0]||s1[1]==s[1])
       {
          ct++;
       }
       else if(s1[0]==s[0]||s1[1]==s[1])
       {
          ct++;
       }
       else if(s2[0]==s[0]||s2[1]==s[1])
       {
          ct++;
       }
       else if(s3[0]==s[0]||s3[1]==s[1])
       {
          ct++;
       }
       else if(s4[0]==s[0]||s4[1]==s[1])
       {
          ct++;
       }
       else if(s5[0]==s[0]||s5[1]==s[1])
       {
          ct++;
       }
    
    if(ct!=0)
    {
       cout<<"YES\n";
    }
    else
    {
       cout<<"NO\n";
    }
    
    return 0;
}
