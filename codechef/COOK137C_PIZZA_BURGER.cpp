//https://www.codechef.com/COOK137C/problems/PIZZA_BURGER
#include<iostream>


using namespace std;
 
int main()
{
  int T; cin>>T;
  while(T--)
  {
    int X, Y,Z;
    cin>>X>>Y>>Z;
    if(X<Y&&X<Z)
    {
      cout<<"NOTHING\n";
    }
    else
    {
      if(Y<=X)
      {
        cout<<"PIZZA\n";
      }
      else
      {
        cout<<"BURGER\n";
      }
    }

  }
  
  return 0;
}
