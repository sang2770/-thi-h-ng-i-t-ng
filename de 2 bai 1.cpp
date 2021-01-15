#include<bits/stdc++.h>
using namespace std;
#define ll long long
class dathuc{
	private:
		int bac;
		int *hs;
	public:
		dathuc(){}
		~dathuc(){
		   delete[] hs;
			}
		void nhap()
		{
			cout<<"Nhap bac:";
			cin>>bac;
			hs=new int[bac+1];
			cout<<"Nhap he so:";
			for(int i=0;i<=bac;i++)
			 cin>>hs[i];
			}
		void xuat()
		{
			cout<<"Da thuc vua nhap la:";
			for(int i=0;i<bac ;i++)
			 cout<<hs[i]<<"*x^"<<i<<"+";
			 cout<<hs[bac]<<"*x^"<<bac;
			 }
		float tong(float x)
		{
			float res=0;
			for(int i=0;i<=bac;i++)
			 res+=hs[i]*pow(x, i);
			return res;
			}
			
};

int main()
{
//  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
    dathuc p;
    p.nhap();
    p.xuat();
    cout<<"\nNhap 2 so:";
    float d1, d2;
    cin>>d1>>d2;
    float res=sqrt(p.tong(d1)-p.tong(d2));
    cout<<res;
    }
  

