#include<bits/stdc++.h>
using namespace std;
#define ll long long
class diem{
	private:
		int hd, td;
	public:
		diem()
		{
			hd=td=0;
		}
		diem(int x, int y)
		{
			hd=x;
			td=y;
		}
		float kc(diem p)
		{
			float res;
			res=sqrt((hd-p.hd)*(hd-p.hd)+(td-p.td)*(td-p.td));
			return res;
		}
		friend int operator==(diem p1, diem p2)
		{
		 if(p1.hd==p2.hd&&p2.td==p1.td)
		 return 1;
		 else
		 return 0;	
			
		}
		void nhap()
		{
			cout<<"Nhap hoanh do tung do";
			cin>>hd>>td;
		}
		
};
int main()
{	
  diem a, b;
  a.nhap();
  b.nhap();
  if(a==b)
  cout<<"Trungf";
}
  


