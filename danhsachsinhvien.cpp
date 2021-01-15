#include<bits/stdc++.h>
using namespace std;
#define ll long long


class SV{
	private:
		int id, GPA;
		string name;
	public:
		SV(){
		id=0;
		GPA=0;
		name="";};
		~SV(){
		id=0;
		GPA=0;
		name="";};
		void nhap()
		{ 
		cin>>id;
		cin.ignore();
		getline(cin, name);
		cin>>GPA;
		}
		void xuat()
		{
			cout<<setw(5)<<left<<id<<"||"<<setw(10)<<left<<name<<"||"<<setw(10)<<left<<GPA<<endl;
		}
		int getGPA()
		{return GPA;
		}
		
		
};
bool ss(SV a, SV b)
{
	return a.getGPA()<b.getGPA();
}

class ds
{
	private:
		SV list[3];
	public:
		void input()
		{
			for(int i=0;i<2;i++)
			 list[i].nhap();
			 
			
		}
		void display()
		{
			for(int i=0;i<2;i++)
			 list[i].xuat();
		}
		void sapxep()
		{
			sort(list, list+2, ss);
//			for(int i=0;i<2;i++)
//			 list[i].xuat();
        cout<<"Danh sach da sap xep la:\n";
             display();	}
		
		void chen(int vt);
		void xoa(int vt);
		};
void ds::chen(int vt)
{
	SV a;
	a.nhap();
	for(int i=vt+1;i<3;i++)
	 list[i]=list[i-1];
	list[vt]=a;
	for(int i=0;i<3;i++)
		 list[i].xuat();
	}
void ds::xoa(int vt)
{
	for(int i=vt;i<2;i++)
	list[i]=list[i+1];
	for(int i=0;i<2;i++)
     list[i].xuat();
     }
	
int main()
{
//  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
ds a;
a.input();
a.display();
a.sapxep();
a.chen(1);
a.xoa(1);
}


