#include<bits/stdc++.h>
using namespace std;
#define ll long long
// nhap danh sach sinh vien
class sv{
	private:
		string ht, que;
		float diem;
	public:
		sv()
		{
			ht="";
			que="";
			diem=0;
//			cout<<"ham tao\n";
			
		}
		~sv()
		{
			ht="";
			que="";
			diem=0;
//			cout<<"ham huy\n";
			
		}
		string getht()
		{
			return ht;
		}
		string getque()
		{
			return que;
		}
		float getdiem()
		{
			return diem;
		}
		void setht(string ht)
		{
			this->ht=ht;
		}
		void setque(string que)
		{
			this->que=que;
		}
		void setdiem(float diem)
		{
			this->diem=diem;
		}
		friend istream &operator>>( istream &it, sv &p );
		friend ostream &operator<<(ostream &it, sv &p);
};
istream &operator>>( istream &it, sv &p )
{
	string a, b;
	float c;
	it>>a>>b>>c;
	p.setht(a);
	p.setque(b);
	p.setdiem(c);
	return it;
}
ostream &operator<<(ostream &it, sv &p)
{
	string a, b;
	float c;
	a=p.getht();
	b=p.getque();
	c=p.getdiem();
	it<<a<<"||"<<b<<"||"<<c<<endl;
	return it;
	
}
class listsv{
	private:
		int n;
		sv *list;
	public:
		void input(){
			cin>>n;
			list=new sv[n+1];
			for(int i=0;i<n;i++)
			 cin>>list[i];
		}
		void output()
		{
			for(int i=0;i<n;i++)
			 cout<<list[i];
		}

};
int main()
{
//  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
//sv p;
//cin>>p;
//cout<<p;
listsv p;
p.input();
p.output();

}

