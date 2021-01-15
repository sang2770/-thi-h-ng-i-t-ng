#include<bits/stdc++.h>
using namespace std;
#define ll long long
class cty{
	private:
		string ten;
		int nam;
	public:
		cty(){
			ten="";
			nam=0;
		}
		~cty()
		{
			ten="";
			nam=0;
		}
		void input()
		{
			cout<<"Nhap ten cong ty:";
			fflush(stdin);
			getline(cin, ten);
			cout<<"Nhap nam thanh lap:";
			cin>>nam;
		}
		void output()
		{
			cout<<ten<<" "<<nam<<endl;
			
		}
		int getnam()
		{
			return nam;
			}
		string getten()
		{
			return ten;
			}
		
};
class ctypm : public cty{
	private:
		int ltv;
	public:
		ctypm()
		{
			ltv=0;
		}
		~ctypm()
		{
			ltv=0;
		}
		void nhap()
		{
			cout<<"nap so lap trinh vien:";
			cin>>ltv;
			cty::input();
		}
		void xuat()
		{
			cout<<ltv<<" ";
			cty::output();
		}
		int getltv()
		{
			return ltv;
			}
		int getnam()
		{
			cty::getnam();
			}
		
		
};
class ctyvt : public cty{
	private:
		int oto;
	public:
		ctyvt()
		{
			oto=0;
		}
		~ctyvt()
		{
			oto=0;
		}
		void nhap()
		{
			cout<<"nap so o to:";
			cin>>oto;
			cty::input();
		}
		void xuat()
		{
			cout<<oto<<" ";
			cty::output();
		}
		
};
int main()
{
//  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
     int n, m;
     cin>>n>>m;
     ctypm a[n];
     ctyvt b[m];
     for(int i=0;i<n;i++)
      a[i].nhap();
      for(int i=0;i<m;i++)
      b[i].nhap();
    for(int i=0;i<n;i++)
     if(a[i].getltv()>20 && a[i].getnam()>2000)
      a[i].xuat();
      
      
 }

