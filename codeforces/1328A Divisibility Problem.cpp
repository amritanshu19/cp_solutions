//https://codeforces.com/problemset/problem/1328/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int a, b;
        cin>>a>>b;
        if(a%b==0)
        {
            cout<<0<<endl; 
        }
        else
        {
        cout<<b-((1ll*a)%b)<<endl;
        }
    t--;
    }
    return 0;
}
