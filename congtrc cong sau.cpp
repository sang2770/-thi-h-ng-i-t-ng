#include<bits/stdc++.h>
using namespace std;
#define ll long long
class so{
	private:
		int a;
	public:
		void nhap()
		{
			cin>>a;
			}
			
		so operator++()
		{
			this->a+=1;
			return *this;
			}
		so operator++(int)
		{
			so it=*this;
			a+=1;
			return it;
			}
		void xuat()
		{
			cout<<a<<endl;
			}
};
int main()
{
	so b;
	b.nhap();
	so c=b++;
	so d=++b;
	c.xuat();
	d.xuat();

	}


