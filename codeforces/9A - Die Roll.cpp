#include <bits/stdc++.h>

using namespace std;

int main()
{
    int y, w;
    cin>>y>>w;
    if(max(y,w)==1)
    {
        cout<<"1/1"<<endl;
    }
    else if(max(y,w)==2)
    {
        cout<<"5/6"<<endl;
    }
    else if(max(y,w)==3)
    {
        cout<<"2/3"<<endl;
    }
    else if(max(y,w)==4)
    {
        cout<<"1/2"<<endl;
    }
    else if(max(y,w)==5)
    {
        cout<<"1/3"<<endl;
    }
    else
    {
        cout<<"1/6"<<endl;
    }
    
    return 0;
}
