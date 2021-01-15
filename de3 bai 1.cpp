#include<bits/stdc++.h>
using namespace std;
#define ll long long
class hcn{
	private:
		int cd, cr;
	public:
		void nhap()
		{
			cout<<"Nhap chieu dai chieu rong:";
			cin>>cd>>cr;
			
		}
		void xuat()
		{
			cout<<"HCN co cd va cr la:";
			cout<<cd<<";"<<cr;
		}
		int dt()
		{
			int s;
			s=cd*cr;
			return s;
		}
};

int main()
{
	int n;
	cin>>n;
	hcn a[n+1];
	int b[n]={};
	int t=0;
	for(int i=0;i<n;i++)
	{
	 a[i].nhap();
	 t+=a[i].dt();
	 b[i]=a[i].dt();
	 
	}
	cout<<"Dien tich trung binh cua ca hinh chu nhat la";
	float tb=t/(float)n;
	cout<<setprecision(3)<<tb<<endl;
	cout<<"ca hinh chu nhat co dien tich nho nhat la:";
	sort(b, b+n);
	for(int i=0;i<n;i++)
	{
		cout<<i+1<<" ";
		if(b[i]!=b[i+1])
		 break;
	}
	
	}
    
	 

	


