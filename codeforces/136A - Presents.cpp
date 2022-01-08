//https://codeforces.com/problemset/problem/136/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, res=0;
    cin>>n;
    int p[n];
    for(int i=0; i<n; i++)
    {
        cin>>p[i];

    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            
        if(p[j]==i+1)
        {
            cout<<j+1<<" ";
            
        }
        
        }
        
    }
    
    return 0;
    
}
