#include<bits/stdc++.h>
using namespace std;
#define ll long long
class giangvien;
class sinhvien{
	private:
		string masv;
	public:
		sinhvien()
		{
			this->masv="";
			}
//		~sinhvien()
//		{
//			this->masv="";}
		void set(){
			cout<<"Nhap ma sv:";
			fflush(stdin);
			getline(cin, this->masv);}
		friend void get(sinhvien a, giangvien b);
};
class giangvien{
	private:
		string magv;
	public:
		giangvien()
		{
			this->magv="";
			}
		~giangvien()
		{
			this->magv="";}
	void set()
	{
		    cout<<"Nhap ma gv:";
			fflush(stdin);
			getline(cin, this->magv);}
	friend  void get(sinhvien a, giangvien b);
	
			
};
void get(sinhvien a, giangvien b)
{
	cout<<"Ma sinh vien:"<<a.masv<<endl;
	cout<<"Ma giang vien:"<<b.magv<<endl;
	}
	
int main()
{
//  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  sinhvien a;
  giangvien b;
  a.set();
  b.set();
  get(a, b);
  }

