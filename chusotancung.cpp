#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n, m;
  cin>>n>>m;
  ll res=1;
  for(int i=0;i<m;i++)
  {
  	res=res*n%10;
  	}
cout<<res;
}
   

