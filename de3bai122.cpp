#include<bits/stdc++.h>
using namespace std;
#define ll long long
class dathuc{
	private:
		int bac;
		int *hs;
	public:
		dathuc()
		{
			bac=0;
			hs=NULL;
		}
		dathuc(int n)
		{
			bac=n;
			hs=new int[n+1];
			
		}
		~dathuc()
		{
			delete[] hs;
		}
		int getbac()
		{
			return bac;
		}
		int *&geths()
		{
			return hs;
		}
		void setbac(int a)
		{
			bac=a;
		}
		void seths(int *p)
		{
			hs=p;
		}
		dathuc operator=(const dathuc &dp);
		
		friend istream &operator>>(istream &it, dathuc &p);
		friend ostream &operator<<(ostream &it, dathuc &p);
		friend dathuc operator+(dathuc p1, dathuc p2);
//		friend void operator=(dathuc p1);
        void cong(dathuc a, dathuc b)
        {
        	bac=a.bac;
        	hs=new int[bac+1];
        	for(int i=0;i<bac;i++)
        	hs[i]=a.hs[i]+b.hs[i];
        	}
        	
};

istream &operator>>(istream &it, dathuc &p)
{
	int bac;
	int *b;
	cout<<"Nhap bac da thuc:";
	it>>bac;
	b=new int[bac+1];
	for(int i=0;i<bac;i++)
	 it>>b[i];
	p.setbac(bac);
	p.seths(b);
	delete[] b;
	return it;
	
}
ostream &operator <<(ostream &it, dathuc &p)
{
	int a;
	int *b=p.geths();
	a=p.getbac();
	int i;
	for(i=0;i<a-1;i++)
	it<<b[i]<<"*x^"<<i<<"+";
	it<<b[i]<<"*x^"<<i<<endl;
	delete[] b;
	return it;
	
	
}
dathuc operator+(dathuc p1, dathuc p2)
{
  dathuc R;
  int n=p1.getbac();
  int m=p2.getbac();
  int *c=p1.geths();
  int *d=p2.geths();
  int *f;
  if(n==m)
  {
  	f=new int[n+1];
  	for(int i=0;i<n;i++)
  	f[i]=c[i]+d[i];
  	R.setbac(n);
  	R.seths(f);
  	return R;
  }
   if(n<m)
   {
   	f=new int[m+1];
   	for(int i=0;i<n;i++)
   	 f[i]=c[i]+d[i];
   	for(int i=n;i<m;i++)
   	 f[i]=d[i];
   	R.setbac(m);
   	R.seths(f);
   	return R;
   }
    if(n>m)
   {
   	f=new int[n+1];
   	for(int i=0;i<m;i++)
   	 f[i]=c[i]+d[i];
   	for(int i=m;i<n;i++)
   	 f[i]=c[i];
   	R.setbac(n);
   	R.seths(f);
   	return R;
   }
   delete[] c, d, f;

   	
}

int main()
{
	dathuc a, b, c;
	cin>>a;
//	cout<<a;
	cin>>b;
//	cout<<b;
	c=a+b;
	cout<<c.getbac()<<endl;
	cout<<c;
//    c.cong(a, b);
//    cout<<c;

}
