#include<bits/stdc++.h>
using namespace std;
#define ll long long
class vecto{
	private:
		float hd, td;
	public:
		vecto()
		{
			}
		friend istream &operator >>(istream &it, vecto &p);
		friend ostream &operator <<(ostream &it, vecto &p);
		vecto tong(vecto a);
		friend vecto nhan(vecto a,int k);	
};
istream &operator >>(istream &it, vecto &p)
{
	it>>p.hd>>p.td;
	return it;
	}
ostream &operator <<(ostream &it, vecto &p)
{
	it<<"("<<p.hd<<";"<<p.td<<")";
	return it;
	}
vecto vecto::tong(vecto a)
{
	vecto b;
	b.hd=hd+a.hd;
	b.td=td+a.td;
	return b;
	}
vecto nhan(vecto a,int k)
{
	vecto b;
	b.hd=a.hd*k;
	b.td=a.td*k;
	return b;
	}

	

int main()
{
	vecto u, v, t;
	int m , n;
	cout<<"Nhap vecto:";
	cin>>u>>v>>t;
	cout<<"nhap so nguyen:";
	cin>>m>>n;
	vecto a=nhan(u, m);
	vecto b=nhan(v, n);
	vecto c=(a.tong(b)).tong(t);
	cout<<c;
	}
	
	
	
	


