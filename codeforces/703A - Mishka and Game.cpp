//https://codeforces.com/problemset/problem/703/A
#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n, mi=0, ch=0;
    cin>>n;
    int m[n],c[n];
    for(int i=0; i<n;i++)
    {
        cin>>m[i]>>c[i];
        if(m[i]>c[i])
        {
            mi++;
        }
        else if(m[i]<c[i])
        {
            ch++;
        }
    }
    if(mi>ch)
    {
        cout<<"Mishka\n";
    }
    else if(mi<ch)
    {
        cout<<"Chris\n";
    }
    else
    {
        cout<<"Friendship is magic!^^\n" ;
    }
    return 0;
}
