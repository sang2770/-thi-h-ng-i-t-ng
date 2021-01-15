#include<bits/stdc++.h>
using namespace std;
#define ll long long
class nguoi{
	protected:
		int tuoi;
		string hoten;
	public:
		void nhap()
		{
			cout<<"Nhap ho va ten:";
			fflush(stdin);
			getline(cin, hoten);
			cout<<"Nhap tuoi:";
			cin>>tuoi;
		}
		void xuat()
		{
			cout<<hoten<<"||"<<tuoi;
			}
		
};
class qlnv:public nguoi{
	private:
		int snct, hsl;
		int luong;
	public:
		void nhap()
		{
			nguoi::nhap();
			cout<<"Nhap snct:";
			cin>>snct;
			cout<<"Nhap hsl:";
			cin>>hsl;
			}
		void xuat()
		{
			nguoi::xuat();
			cout<<snct<<"||"<<hsl<<endl;
			}
		
		void tienluong(int phucap)
		{
			
			luong=1*hsl+phucap;
			}
		int getnam()
		{
			return snct;
			}
		int getluong()
		{
			return luong;
			}
}; 
int main()
{
	int n;
	cin>>n;
	
	qlnv a[n+1];
	for(int i=0;i<n;i++)
	 a[i].nhap();
	int max=a[0].getnam();
	cout<<"\n Nhan vien co so nam cong tac nhieu nhat la:";
	for(int i=1;i<n;i++)
	if(max<a[i].getnam())
	max=a[i].getnam();
	for(int i=0;i<n;i++)
	{
	 int nam=a[i].getnam();
	 if(nam==max)
	 a[i].xuat();
	 if(nam>=15);
	 a[i].tienluong(3000000);
	 if(nam<15&& nam>=5)
	 a[i].tienluong(2000000);
	  if(nam<15&& nam<5)
	 a[i].tienluong(1000000);
	 }
	int max1=a[0].getluong();
	for(int i=1;i<n;i++)
	if(a[i].getluong()>max1)
	max1=a[i].getluong();
	cout<<"\nNhan vien co so luong cao nhat la:";
	for(int i=0;i<n;i++)
	if(max1==a[i].getluong())
	a[i].xuat();
	}
	
	 
	  
	  
	

