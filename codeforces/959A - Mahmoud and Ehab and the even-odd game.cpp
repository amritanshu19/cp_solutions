#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n; cin>>n;
     int a = n/2 , b = n%2;
     if(a%2==0&&b==0)
     {
        cout<<"Mahmoud\n";
     }
     else if(a%2==0&&b==1)
     {
        cout<<"Ehab\n";
     }
     else if(a%2==1&&b==0)
     {
        cout<<"Mahmoud\n";
     }
     else
     {
        cout<<"Ehab\n";
     }
    
    return 0;
}
