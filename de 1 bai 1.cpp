#include<bits/stdc++.h>
using namespace std;
#define ll long long
class book{
    private:
    	int ms, nam;
    	string name, tg, nxb;
    public:
    	book(){
		}
		void nhap()
		{
			cout<<"Nhap ms:";
			cin>>ms;
			cout<<"Nhap name:";
//			cin>>name;
			cin.ignore();
			getline(cin, name);
			cout<<"Nhap tg:";
//			cin>>tg;
//			cin.ignore()
			getline(cin, tg);
			cout<<"Nhap nam:";
			cin>>nam;
			cout<<"Nhap nxb:";
			cin.ignore();
			getline(cin, nxb);
		}
		string getname()
		{
			return name;
		}
		void xuat()
		{
			cout<<ms<<"|"<<name<<"|"<<tg<<"|"<<nam<<"|"<<nxb<<"|"<<endl;
			
		}
		
};

int main()
{
//  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
int n;
cin>>n;
book a[n+1];
for(int i=0;i<n;i++)
 a[i].nhap();
 for(int i=0;i<n;i++)
  a[i].xuat();
  string s;
//  cin.ignore();
  getline(cin, s);
  for(int i=0;i<n;i++)
   if(s==a[i].getname())
    a[i].xuat();
    cout<<s.size();
}
    
  

