//codeforces 236A Boy or Girl
#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;
    int count=0;
    sort(s.begin(), s.end());
    for(int i=0; i<s.size(); i++)
    {
        for(int j=i+1; j<s.size(); j++)
            {
               if(s[i]==s[j])
               {
                   count++;
                   break;
               }
            }
    }
    if ((s.size()-count)%2==0)
    {
        cout<<"CHAT WITH HER!\n";
    }
    else
    {
        cout<<"IGNORE HIM!\n";
    }
    return 0;
}
