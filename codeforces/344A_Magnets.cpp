//https://codeforces.com/problemset/problem/344/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, mnum=1;
    cin>>n;
    int mag[n];
    for(int i=0; i<n; i++)
    {
        cin>>mag[i];
    }
    for(int i=0; i<n-1; i++)
    {
        if(mag[i]!=mag[i+1])
        {
            mnum++;
        }
    }
    cout<<mnum<<endl;
    return 0;
}
