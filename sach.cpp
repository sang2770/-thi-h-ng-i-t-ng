#include<bits/stdc++.h>
using namespace std;
#define ll long long
class book{
	protected:
		int ms;
		string name, tg;
	public:
		book()
		{
		}
		book(int ms, string name, string tg)
		{
		ms=ms;
		tg=tg;
		name=name;
		}
	friend istream &operator >>(istream &it, book &p);
	friend ostream &operator <<(ostream &it, book &p);
};
istream &operator >>(istream &it, book &p)
{
	it>>p.ms;
	it.ignore();
	getline(it,p.name);
	getline(it, p.tg);
	return it;
}
ostream &operator <<(ostream &it, book &p)
{
	it<<p.ms<<" "<<p.name<<" "<<p.tg<<endl;
	return it;
}
int main()
{
//  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
   book a;
   cin>>a;
   cout<<a;
}

