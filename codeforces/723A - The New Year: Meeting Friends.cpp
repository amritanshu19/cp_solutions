//https://codeforces.com/problemset/problem/723/A
#include<bits/stdc++.h>
using namespace std;

int main()
{   
int x1, x2, x3, x4;
cin>>x1>>x2>>x3;
x4 = max(x1,max(x2,x3))-min(x1,min(x2,x3));
cout<<x4<<'\n';
return 0;
    
}
