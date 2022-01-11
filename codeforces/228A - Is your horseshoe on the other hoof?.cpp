//https://codeforces.com/problemset/problem/228/A
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int s1, s2, s3, s4;
    cin>>s1>>s2>>s3>>s4;
    int a[4];
    a[0]=s1,a[1]=s2,a[2]=s3,a[3]= s4;
    sort(a,a+4);
    bool b1 = a[0]==a[1], b2 = a[1]==a[2], b3 = a[2]==a[3];
    if(a[0]==a[3])
    {
        cout<<3<<'\n';
    }
    else if(a[0]==a[2]||a[1]==a[3])
    {
        cout<<2<<'\n';
    }
    else if(b1&&b3&&!b2)
    {
        cout<<2<<'\n';
    }
    else if((b1&&!b2)||(!b1&&b2&&!b3)||(b3&&!b2))
    {
        cout<<1<<'\n';
    }
    else
    {
        cout<<0<<'\n';
    }
    return 0;
}
