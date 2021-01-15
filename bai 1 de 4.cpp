#include<bits/stdc++.h>
using namespace std;
#define ll long long
class hcn{
	private:
		int cd, cr;
	public:
		friend istream &operator>>(istream &it, hcn &p)
		{
			cout<<"Nhap chieu dai:";
			it>>p.cd;
			cout<<"Nhap chieu rong:";
			it>>p.cr;
			return it;
			}
		friend ostream &operator<<(ostream &it, hcn &p)
		{
			it<<p.cd<<"|"<<p.cr;
			}
		int dt()
		{
			return cd*cr;
			}
		
};
int main()
{
	int n;
	cin>>n;
	cout<<"Nhap :";
	hcn a[n+1];
	float tb=0;
	for(int i=0;i<n;i++)
	 {
	  cin>>a[i];
	  tb+=a[i].dt();
	  }
	cout<<"Dien tich trung binh cua hinh chu nhat la:";
	cout<<tb/(float)n;
	int max=a[0].dt();
	for(int i=1;i<n;i++)
	  if(max<a[i].dt())
	    max=a[i].dt();
	cout<<"Cac hinh chu nhat co dien tich lon nhat la:";
	for(int i=0;i<n;i++)
	 if(max==a[i].dt())
	  cout<<i+1<<" ";
	}
	
	

