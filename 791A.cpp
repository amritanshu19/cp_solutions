/*Bear and Big Brother (Codeforces 791A)*/
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a, b;
    cin>>a>>b;
    float n;
    n = log((b*1.0)/a)/log(1.50);
    if(floor(n)==ceil(n))
    {
        cout<<ceil(n)+1<<endl;
    }
    else{
    cout<<ceil(n)<<endl;
    }
    return 0;
}
