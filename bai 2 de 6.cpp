#include<bits/stdc++.h>
using namespace std;
#define ll long long
int m, n;
class monhoc{
	private:
	   int ma,sotin;
	   string ten;
	public:
		void nhap()
		{
			cout<<"Nhap ma mon hoc:";
			cin>>ma;
			cout<<"Nhap ten mon hoc:";
			fflush(stdin);
			getline(cin, ten);
			cout<<"Nhap so tin chi:";
			cin>>sotin;
		}
		void xuat()
		{
			cout<<setw(15)<<left<<ma<<"||"<<setw(15)<<left<<ten<<"||"<<setw(15)<<left<<sotin<<endl;
		}
		int gettin()
		{
			return sotin;
		}
		string getname()
		{
			return ten;
		}
	
};

class dkhp{
	private:
		int masv;
		string ten;
		int *a=new int [n+1];
	public:
		void nhap()
		{
		  cout<<"Nhap ten sinh vien:";
		  fflush(stdin);
		  getline(cin, ten);
		  cout<<"Nhap ma sinh vien:";
		  cin>>masv;
		  cout<<"Nhap bang dki:(dki:1;k dki:0)";
		  for(int i=0;i<n;i++)
		  cin>>a[i]; 	
		}
		int*& getcheck()
		{
			return a;
		}
		void xuat()
		{
			cout<<setw(15)<<left<<masv<<"||"<<setw(15)<<left<<ten<<"||";
		}
		
};

int main()
{
	cout<<"Nhap so mon hoc:";
	cin>>n;
	monhoc b[n+1];
	for(int i=0;i<n;i++)
	 b[i].nhap();
	cout<<"Nhdp so sinh vien";
	cin>>m;
	dkhp d[m+1];
	int c[m+1]={};
	for(int i=0;i<m;i++)
	{
		cout<<setw(15)<<left<<"STT"<<"||"<<setw(15)<<left<<"Mamon"<<"||"<<setw(15)<<left<<"Sotin"<<endl;
		for(int i=0;i<n;i++)
		 b[i].xuat();
		d[i].nhap();	
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		 if(*(d[i].getcheck()+j)==1)
		 c[i]++;
	}
	cout<<"So tin chi cua moi sinh vien la:\n";
	cout<<setw(15)<<left<<"Ten"<<"||"<<setw(15)<<left<<"MASV"<<"||"<<setw(15)<<left<<"SOTIN"<<endl;
	for(int i=0;i<m;i++)
	{
		d[i].xuat();
		cout<<c[i]<<endl;
	}
	string mon;
	cout<<"Nhap ten mon hoc:";
	fflush(stdin);
	getline(cin, mon);
	int vt;
	for(int i=0;i<n;i++)
	 if(b[i].getname()==mon)
	  {
	  	vt=i;
	  	break;
	  }
	for(int i=0;i<m;i++)
	 if(*(d[i].getcheck()+vt)==1)
	  d[i].xuat();
	
	
	
}

