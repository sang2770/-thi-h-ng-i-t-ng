#include<bits/stdc++.h>
using namespace std;
#define ll long long
int ucln(int a, int b)
{
	while(a=!b)
	{
		if(a>b)
		a=a-b;
		if(b>a);
		b=b-a;
	}
	return a;
	
}
class PS{
	int ts, ms;
	public:
		void nhap(){
			cin>>ts>>ms;
		}
		void xuat(){ cout<<ts<<"/"<<ms<<endl;
		}
		PS operator+(PS a);
		PS operator*(PS a);
//		friend PS operator*(PS a, PS b);
		PS operator++();
		PS operator++(int);
		PS operator=(PS a);
		friend istream &operator>>(istream &it, PS &p);
		friend ostream &operator<<(ostream &it, PS &p);
		PS toigian()
		{
		ts/=ucln(ts, ms);
	    ms/=ucln(ts, ms);	
		}
};
PS PS::operator+(PS a){
	PS t;
	t.ts=ts*a.ms+ms*a.ts;
	t.ms=ms* a.ms;
	return t;
}
//PS operator*(PS a, PS b)
//{
//	PS t;
//	t.ts=a.ts*b.ts;
//	t.ms=a.ms*b.ms;
//	return t;
//}
PS PS::operator*(PS a)
{
	PS t;
	t.ts=ts*a.ts;
	t.ms=ms*a.ms;
	return t;
}

PS PS::operator++(int)
{
	PS t=*this;
	ts=ts+ms;
	return t;
	}
PS PS::operator++( )
{
	ts=ts+ms;
	return *this;
	}
 istream &operator>>(istream &it, PS &p)
{
	it>>p.ts>>p.ms;
	return it;
	}
 ostream &operator<<(ostream &it, PS &p)
{
	
	it<<p.ts<<"/"<<p.ms<<endl;
	return it;
	}
	PS PS::operator=(PS a)
	{
		this->ts=a.ts;
		this->ms=a.ms;
		return *this;
		}
int main()
{
	PS a, b, c,f;
	cin>>a;
//	a.nhap();
//	b.nhap();
    a.toigian();
	cout<<a;

}
  

