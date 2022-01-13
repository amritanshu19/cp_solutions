//https://codeforces.com/problemset/problem/520/A
#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n; cin>>n;
    string s;
    cin>>s;
    if(n<26)
    {
        cout<<"NO\n";
    }
    else{
        int c2=0;
        for(int i=0; i<n;i++)
        {
            s[i]=tolower(s[i]);
        }
        for(int i=0; i<n;i++)
        {
            for(int j=i+1; j<n;j++)
        {
            if(s[i]==s[j])
            {
                c2++;
                break;
            }
        }
        }
        
        if(n-c2>=26)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
          
    }
    return 0;
}
