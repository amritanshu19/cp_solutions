https://codeforces.com/problemset/problem/118/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, s1;
    cin>>s;
    
    for(int i=0; i<s.size();i++)
    {
        s[i]=tolower(s[i]);
        
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
        {
            continue;
        }
        else if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y')
        {
            s1.push_back('.');
            s1.push_back(s[i]);  
        }
    }
    cout<<s1<<'\n';
    return 0;
}
