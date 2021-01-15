#include<bits/stdc++.h>
using namespace std;
#define ll long long
int tong(int *A,int n)
{
	if(n==1)
	return A[0];
	return A[n-1]+tong(A,n-1);
	
}
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  int A[n+1];
  for(int i=0;i<n;i++)
   cin>>A[i];
  cout<<tong(A, n);
}
  

