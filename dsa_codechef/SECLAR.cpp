//https://www.codechef.com/CCSTART2/problems/SECLAR/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    cout<<a+b+c-min(a,min(b,c))-max(a,max(b,c))<<endl;
    return 0;
}
