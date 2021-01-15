#include<bits/stdc++.h>
using namespace std;
#define ll long long
class toado{
	private:
		int hd, td;
	public:
		public:
		void nhap()
		{
			cout<<"Nhap hoanh do va tung do:";
			cin>>hd>>td;
		
		}
		void xuat()
		{
			cout<<"("<<hd<<";"<<td<<")";
		}
		float kc()
		{
			return sqrt(hd*hd+td*td);
		}
};
class diemmau:public toado{
	private:
		int mau;
	public:
		void nhap()
		{
			toado::nhap();
			cout<<"Nhap mau:";
			cin>>mau;
		}
		void xuat()
		{
			toado::xuat();
			cout<<mau<<endl;
		}
		int getmau()
		{return mau;
		}
};
int main()
{
//  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  int dem[4];
  string ten[]={"Do", "vang","xanh"};
  int j=0;
  float res=0;
  diemmau *a=new diemmau[n+1];
  float b[n+1];
  for(int i=0;i<n;i++)
   {a[i].nhap();
     b[i]=a[i].kc();
    if(a[i].getmau()==1)
     dem[j]++;
    else if(a[i].getmau()==2)
     dem[j+1]++;
    else
    dem[j+2]++;}
//    cout<<"so diem co mau do ,vang , xanh lan luot la:"<<dem1<<" "<<dem2<<" "<<dem3<<endl;
   for(int i=0;i<3;i++)
    cout<<"so diem co mau "<<ten[i]<<" la:"<<dem[i]<<endl;
    
    cout<<"cac diem co kc den goc toa do lon nhat la:";
    for(int i=0;i<n;i++)
     if(res<b[i])
      res=b[i];
     for(int i=0;i<n;i++)
      if(res==b[i])
        cout<<i+1<<" ";
        
    
}
    
   

