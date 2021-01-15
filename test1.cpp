#include<bits/stdc++.h>
using namespace std;
#define ll long long
class so
{
    int ms;
	public:
		void nhap(){ cin>>ms;};
		void xuat(){cout<<ms;};
		 friend int cong(so a,so b);
};

int cong(so a, so b)
{
	int t;
    t=a.ms+b.ms;
	return t;
	}
int main()
{
//  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  so a, b;
  a.nhap();
  b.nhap();
  cout<<cong(a, b);
  }

