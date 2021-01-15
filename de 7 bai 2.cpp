#include<bits/stdc++.h>
using namespace std;
#define ll long long
class mathang{
	private:
		string mahang;
		int dongia;
	public:
		void nhap()
		{
			cout<<"Nhap ma hang";
			fflush(stdin);
			getline(cin, mahang);
			cout<<"Nhap don gia:";
			cin>>dongia;
			}
		string getma()
		{
			return mahang;
			}
		int getgia()
		{
			return dongia;
			}
			
		
};
class hoadon{
	private:
		string mahang;
		int sl;
		string ngayban;
	public:
		void nhap()
		{
			cout<<"Nhap Hoa don\n";
			cout<<"Nhap ma hang:";
			fflush(stdin);
			getline(cin, mahang);
			cout<<"Nhap ngay ban:";
			fflush(stdin);
			getline(cin, ngayban);
			cout<<"Nhap sl:";
			cin>>sl;
			}
		int getsl()
		{
			return sl;
			}
		string getngay()
		{
			return ngayban;
			}
		string getma()
		{
			return mahang;
			}
		
};
int main()
{
//	mathang *a;
	int m, dem=0;
	cout<<"Nhap so mat hang:";
	cin>>m;
	mathang a[m+1];
	for(int i=0;i<m;i++)
	 a[i].nhap();
	cout<<"Nhap Hoa don:";
	int n;
	cin>>n;
	hoadon b[n+1];
	for(int i=0;i<n;i++)
	{
	  b[i].nhap();
	  if(b[i].getsl()<=10&& b[i].getsl()>=5)
	  dem++;
	  }
	cout<<"So hoa don tm là:";
	cout<<dem<<endl;
	cout<<"Nhap ngay:";
	int res=0;
	string ngay;
	fflush(stdin);
	getline(cin, ngay);
	for(int i=0;i<n;i++)
	{
	  if(b[i].getngay()==ngay)
	  {
	   for(int j=0;j<m;j++)
	    {
	    	if(b[i].getma()==a[j].getma())
	    	 res+=b[i].getsl()*a[j].getgia();
	    	break;
	    	}
	    	}
	  else
	  continue;
	  }
	cout<<"So tien ban dc la:";
	cout<<res;
	}
	  
	 
	    	
	 	
	
	 
	

