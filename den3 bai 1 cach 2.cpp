#include<bits/stdc++.h>
using namespace std;
#define ll long long
class dthuc{
	private:
		int bac;
		int *hs;
	public:
		dthuc()
		{
			bac=0;
			hs=NULL;
		}
		~dthuc()
		{
			delete[] hs;
		}
		friend istream &operator>>(istream &it, dthuc &p)
		{
			cout<<"Nhap bac cua da thuc:";
			it>>p.bac;
			p.hs=new int[p.bac+1];
			cout<<"Nhap he so:\n";
			for(int i=0;i<=p.bac;i++)
			 it>>p.hs[i];
			return it;
		}
		friend ostream &operator<<(ostream &it, dthuc &p)
		{
			for(int i=0;i<=p.bac-1;i++)
			cout<<p.hs[i]<<"*x^"<<i<<"+";
			cout<<p.hs[p.bac]<<"*x^"<<p.bac<<endl;
			return it;
			
		}
		dthuc operator+(const dthuc &d)
		{
			dthuc t;
			t.bac=d.bac;
			t.hs=new int[t.bac+1];
			for(int i=0;i<=t.bac;i++)
			t.hs[i]=hs[i]+d.hs[i];
			return t;
		}
		dthuc operator=(const dthuc &d)
		{
			bac=d.bac;
			hs=new int[bac+1];
			for(int i=0;i<=bac;i++)
			 hs[i]=d.hs[i];
			 return *this;
		}
		
		
		
};
int main()
{
	dthuc a, b;
	cin>>a>>b;
	cout<<a<<b;
	dthuc c=a+b;
	cout<<c;
}

