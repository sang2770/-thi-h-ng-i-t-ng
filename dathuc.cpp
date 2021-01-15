#include<bits/stdc++.h>
using namespace std;
#define ll long long
class dathuc{
	int bac;
	int *hs;
	public:
		dathuc()
		{
			bac=0;
			hs=NULL;
			}
		~dathuc()
		{
			delete[] hs;
			}
		void nhap()
		{
			cout<<"Nhap bac cua dathuc:";
			cin>>bac;
			cout<<"Nhap he so:";
			hs=new int[bac+1];
			for(int i=0;i<=bac;i++)
			 cin>>hs[i];
			}
		void xuaths()
		{
			cout<<"he so Dathuc vua nhap la:\n";
			cout<<"(";
			for(int i=0;i<=bac;i++)
			 cout<<hs[i]<<" ";
			 cout<<")"<<endl;
			 
			}
		int res(int T)
		{
			int res=0;
			for(int i=0;i<=bac;i++)
			res+=hs[i]*pow(T, i);
			return res;
			}
		void xuat()
		{
			cout<<"Da thuc co dang:\n";
			for(int i=0;i<=bac-1;i++)
			 cout<<hs[i]<<"*x^"<<i<<"+";
			 cout<<hs[bac]<<"*x^"<<bac<<endl;
			 }
			 
		
		
};
int main()
{
	dathuc a;
	int t;
	cout<<"Nhap t:";
	cin>>t;
	a.nhap();
	a.xuat();
	a.xuaths();
	cout<<"gia tri cua da thuc tai t la:";
	cout<<a.res(t);
	}


