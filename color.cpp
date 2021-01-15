#include<bits/stdc++.h>
using namespace std;
#define ll long long
class color{
	protected:
		string ten, ma;
	public:
		color()
		{
			ten=ma="";}
		~color()
		{ ten=ma="";
		}
		friend istream &operator>>(istream &it , color &p)
		{
			getline(it,p.ten);
			it.ignore();
			getline(it, p.ma);
			return it;
			}
		friend ostream &operator<<(ostream &os, color &p)
		{
			os<<p.ten<<p.ma;
			return os;
			}
		string getmau()
		{
		  return this->ten;
		  }
			
		
};
class diem{
	protected:
		int x, y;
	public:
		diem()
		{
			x=y=0;
			}
		~diem()
		{
			x=y=0;}
		friend istream &operator>>(istream &it, diem &p)
		{
			it>>p.x>>p.y;
			return it;
			}
		friend ostream &operator<<(ostream & it, diem &p)
		{
			it<<p.x<<p.y;
			return it;
			}
		bool cheochinh()
		{
			if(x==y) return true;
			return false;
			}
		
			
		
};
class Pixel:public color, public diem{
	public:
		Pixel(){
			x=y=0;
			ten=ma="";
			}
		 ~Pixel()
    {
        x = y = 0;
        ten = ma = "";
    }
    friend istream &operator>>(istream &is, Pixel &p)
    {
    	is>>p.x>>p.y;
    	is>>p.ten>>p.ma;
    	return is;}
    friend ostream &operator<<(ostream &os, Pixel &p)
    {
    	os<<p.x<<p.y<<p.ten<<p.ma;
    	return os;
    	}
    bool check()
    {
    	if(x==y && ma=="#0000FF")
    	return true;
    	return false;
    	}
};
int main()
{
//  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
   int n;
   cin>>n;
   Pixel *list= new Pixel[n];
   for(int i=0;i<n;i++)
    cin>>list[i];
    for(int i=0;i<n;i++)
    if(list[i].check()==true)
    cout<<list[i];
    return 0;
    }
    

