#include<bits/stdc++.h>
using namespace std;
#define ll long long
void nhap(int **a, int n, int m)
{
	cout<<"Nhap ma tran:\n";
	for(int i=0;i<n;i++)
	 for(int j=0;j<m;j++)
	  cin>>a[i][j];
	}
void xuat(int **a, int n, int m)
{
	for(int i=0;i<n;i++)
	{
	 for(int j=0;j<m;j++)
	   cout<<a[i][j]<<" ";
	cout<<"\n";
	}
	}
void xoay(int **a, int n, int m)
{
	for(int i=0;i<n;i++)
	{
	 for(int j=0;j<m;j++)
	  cout<<a[n-j-1][i]<<" ";
	  cout<<"\n";
	  }
	  }
int main()
{
	int **a;
	int n, m;
	cin>>n>>m;
	a=new int*[n];
	for(int i=0;i<m;i++)
	a[i]=new int[m];
	nhap(a, n, m);
	xuat(a, n, m);
	xoay(a, n, m);
	delete[] a;
	
	}
	
	
	


