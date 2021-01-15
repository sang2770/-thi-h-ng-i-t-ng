#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int a, b;
  cin>>a>>b;
  int x, y;
  if((2*a*b)%(a-b)==0)
    y=(2*a*b)/(a-b);
  else {cout<<"HUY HON"; 
        return 0;}
  if(y%b!=0|| y%a!=0)
    {cout<<"HUY HON";
    return 0;}
  if(y<=0)
   {
   	cout<<"HUY HON";
   	return 0;
   	}
  else x=y/a+1;
  cout<<x<<" "<<y;
  }
  
  

