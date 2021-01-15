#include<bits/stdc++.h>
using namespace std;
template <class B>
void nhap(B *&a, int b)
{
	cin>>b;
	a=new B [b+1];
	for(int i=0;i<b;i++)
	 cin>>a[i];
	
	 }
template <class B>
void xuat(B *a, int b)
{
	cout<<"Day so float:\n";
	for(int i=0;i<b;i++)
	 cout<<*(a+i)<<" ";
	 
	 }
	 
/*void nhap(int *&a, int &b)
{
	cin>>b;
	a=new int [b+1];
	for(int i=0;i<b;i++)
	 cin>>*(a+i);
	 }
void xuat(int  *a, int b)
{
	cout<<"Day so int:\n ";
	for(int i=0;i<b;i++)
	 cout<<*(a+i)<<" ";
	 }
	*/
template<class T> // ham co kieu du lieu mau la T
T ucln(T a, T b)
{
	while(a!=b)
	{
	if(a>b) a=a-b;
	else if(a<b) b=b-a;
	}
	return a;}
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n, *a, m;
  float *b;
  nhap(a, n);
  xuat(a, n);
  nhap(b,m);
  xuat(b, m);
  cout<<ucln(3, 4);
  }
  
  
  
  



