#include<bits/stdc++.h>
using namespace std;
#define ll long long
class PS{
	private:
		int ts, ms;
	public:
//	  PS()
//	  {
//	  	ts=1;
//	  	ms=2;
//	  	}
//	  	PS(int a, int b)
//	  	{
//	  		ts=a;
//	  		ms=b;
//	  		}
	  int getts()
	  {return ts;
	  }
	  int getms()
	  {
	  	return ms;}
	  void setts(int ts)
	  {
	  	this->ts=ts;
	  	}
	  	void setms(int ms)
	  {
	  	this->ms=ms;
	  	}
	  	friend istream &operator>>(istream &it, PS &p);
		friend ostream &operator<<(ostream &it, PS &p);
	  
};
 istream &operator>>(istream &it, PS &p)
{
	int t, m;

	it>>t>>m;
	p.setts(t);
	p.setms(m);
	return it;
	}
 ostream &operator<<(ostream &it, PS &p)
{
	int t, m;
	t=p.getts();
	m=p.getms();
	it<<t<<"/"<<m<<endl;
	return it;
	}
class DS{
	private:
		int n;
		PS *list;
	public:
		DS()
		{   int n=10;
			list=new PS[n+1];
			}
		void input();
		void output();
		
};
void DS::input()
{
	cin>>n;
	if(n>10)
	list=new PS[n+1];
	for(int i=0;i<n;i++)
	 cin>>list[i];
	 }
void DS::output()
{
	for(int i=0;i<n;i++)
	 cout<<list[i]<<endl;
	 }
int main()
{
//  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
//    int t, m;
//    PS(p);
//    PS p(3, 4);
//   PS p;
//    t=p.getts();
//    m=p.getms();
//    cin>>p;
//    cout<<p;
DS list;
list.input();
list.output();
    }

