//https://www.codechef.com/CCSTART2/problems/ISBOTH
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    bool a = N%5==0||N%11==0, b= N%5==0&&N%11==0;
    if(a&&!b)
    {
        cout<<"ONE\n";
    }
    else if(b)
    {
        cout<<"BOTH\n";
    }
    else
    {
        cout<<"NONE\n";
    }
    return 0;
}
