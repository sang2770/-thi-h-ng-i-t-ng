#include<bits/stdc++.h>
using namespace std;
#define ll long long
class sach{
	private:
		int masach, nam;
		string ten, tg;
	public:
		sach()
		{
			masach=0;
			nam=0;
			ten="";
			tg="";
		}
		void nhap()
		{
			cout<<"Nhap ma sach:";
			cin>>masach;
			cout<<"Nhap ten sach:";
			fflush(stdin);
			getline(cin, ten);
			cout<<"Nhap nam xuat ban:";
			cin>>nam;
			cout<<"Nhap ten tac gia:";
			fflush(stdin);
			getline(cin, tg);
		}
		void xuat()
		{
			cout<<masach<<"||"<<ten<<"||"<<nam<<"||"<<tg<<endl;
			
		}
		string getten()
		{
			return ten;
		}
		int getnam()
		{
			return nam;
		}
};
int main()
{
	int n;
	cout<<"Nhap so sach";
	cin>>n;
	sach a[n+1];
	for(int i=0;i<n;i++)
	 a[i].nhap();
	string p;
	cout<<"Nhap ten sach can tim:";
	fflush(stdin);
	getline(cin, p);
	for(int i=0;i<n;i++)
	 if(a[i].getten()==p)
	  a[i].xuat();
	int dem=0;
	cout<<"So sach xuat ban truoc nam 2000 la:\n";
	for(int i=0;i<n;i++)
	 if(a[i].getnam()<2000)
	  {
	    a[i].xuat();
	    dem++;
	}
    if(dem==0)
    cout<<"K co sach nao xb tr nam 2000";
	  

}

