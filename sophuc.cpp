#include<bits/stdc++.h>
using namespace std;
#define ll long long
class sp{
	private:
		int thuc , ao;
	public:
		void nhap()
		{
			cout<<"Nhap phan thuc phan ao:";
			cin>>thuc>>ao;
			
		}
		void xuat()
		{
			cout<<thuc<<"+"<<ao<<"*i";
			
		}
};
int main()
{
	sp a, b;
	a.nhap();
	a.xuat();}

