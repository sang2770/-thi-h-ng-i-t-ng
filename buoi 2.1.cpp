#include<bits/stdc++.h>
using namespace std;
#define ll long long
class tg{
	private:
		int gio, phut, giay;
	public:

		int getgio(){
			return gio;
		}
		int getphut(){
			return phut;
		}
		int getgiay(){
			return giay;
		}
		void setgio(int gio){
		 this->gio=gio;}
		 void setphut(int phut){
		 this->phut=phut;}
		 void setgiay(int giay){
		 this->giay=giay;}
		 friend istream &operator >>(istream &it, tg &p);
		 friend ostream &operator <<(ostream &it, tg &p);
		 };
istream &operator>>(istream &it, tg &p)
{
	int a, b, c;
	it>>a>>b>>c;
	p.setgio(a);
	p.setgiay(c);
	p.setphut(b);
	return it;
	}
ostream &operator <<(ostream &it, tg &p)
{
	int a, b, c;
	a=p.getgio();
	b=p.getphut();
	c=p.getgiay();
	it<<a<<":"<<b<<":"<<c<<endl;
	return it;
	}
class listtg{
	private:
		tg *list;
		int n;
	public:
		listtg()
		{
			int n=10;
			list= new tg[n+1];
			}
	
		void input(){
			cin>>n;
			list=new tg[n+1];
			for(int i=0;i<n;i++)
			 cin>>list[i];
			 }
		void display()
		{
			for(int i=0;i<n;i++)
			 cout<<list[i];
			 }
};
	
int main()
{
//  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
 listtg a;
 a.input();
 a.display();
 
 }
