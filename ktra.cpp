#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Phanso{
	private:
		int t, m;
	public:
		Phanso()
		{
			t=0;
			m=0;
		}
		~Phanso(){
			t=0;
			m=0;
		}
		friend istream &operator>>(istream &it, Phanso &p);
		friend ostream &operator<<(ostream &it, Phanso &p);
		friend  Phanso ss(Phanso a, Phanso b);
		 friend Phanso max(Phanso *a, int n);
		
		
		
};
istream &operator>>(istream &it, Phanso &p)
{
	it>>p.t>>p.m;
	return it;
	}
 ostream &operator<<(ostream &it, Phanso &p)
{
	it<<p.t<<"/"<<p.m<<endl;
	return it;
	}
Phanso ss(Phanso a, Phanso b)
{
	return a.t*b.m>b.t*a.m?a:b;
}
Phanso max(Phanso *a, int n)
{
	if(n==1) return a[0];
	return ss(a[n-1], max(a, n-1));
	
}
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  printf("Nhap n:");
  cin>>n;
  Phanso a[n+1];
  for(int i=0;i<n;i++)
   cin>>a[i];
    Phanso b;
    b=max(a, n);
    cout<<"Phan so max la : ";
   cout<<b;

}

