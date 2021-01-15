#include<bits/stdc++.h>
using namespace std;
#define ll long long
class so{
	private:
		int a;
	public:
		void nhap(){ cin>>a;};
		void xuat(){cout<<a;};
		friend so cong(so a, so b);
};
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  so a, b;
  a.nhap();
  b.nhap();
  so c;
//  c=cong(a, b);
  c.xuat();
  }

