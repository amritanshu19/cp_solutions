//https://codeforces.com/problemset/problem/996/A
#include<bits/stdc++.h>
using namespace std;



int main()
{
    long long int n,c2=0; cin>>n;
    while(n>0)
    {
        if(n>=100)
        {
            c2+=(n*1ll/100);
            n=n%100;
        }
        else if(n>=20&&n<100)
        {
            c2+=(n/20);
            n=n%20;
        }
        else if(n>=10&&n<20)
        {
            c2+=(n/10);
            n=n%10;
        }
        else if(n>=5&&n<10)
        {
            c2+=(n/5);
            n=n%5;
        }
        else
        {
            c2+=n;
            n = 0;
            break;
        }
    }
    cout<<c2<<endl;
    return 0;
}
