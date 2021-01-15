#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef struct{
	string name;
	int tong=0;
}truong;
bool ss(truong a, truong b)
{
	return a.tong>b.tong; 
}
class thisinh{
	private:
		string hoten;
		int diem;
	public:
		void nhap()
		{
			cout<<"Nhap ten:";
			fflush(stdin);
			getline(cin, hoten);
			cout<<"Nhap diem:";
			cin>>diem;
			
		}
		void xuat()
		{
			cout<<hoten<<"||"<<diem<<"||";
		}
		int getdiem()
		{
			return diem;
		}
};
class olympic:public thisinh{
	private:
		string truong;
	public:
		
		void nhap()
		{
		thisinh::nhap();
		cout<<"Nhap tren truong:";
		fflush(stdin);
		getline(cin, truong);
	    }
	    void xuat()
	    {
	    	thisinh::xuat();
	    	cout<<truong<<endl;
		}
		string gettruong()
		{
			return truong;
		}
	
};
int main()
{
	int n;
	cin>>n;
	olympic a[n+1];
//	int b[3]={},c[3]={};
    int c[3]={};
    truong b[3];
    b[0].name="A";
    b[1].name="B";
    b[2].name="C";
	for(int i=0;i<n;i++)
	{
	  a[i].nhap();
	  if(a[i].gettruong()=="A")
	  {
	    b[0].tong+=a[i].getdiem();
	    
	    c[0]++;
	   }
	  else if(a[i].gettruong()=="B")
	  {
	     b[1].tong+=a[i].getdiem();
	     c[1]++;
	   }
	  else
	  {
	  c[2]++;
	  b[2].tong+=a[i].getdiem();
      }
  }
    cout<<"Tong so diem truong A, B, C lan luot la :";
    for(int i=0;i<3;i++)
     cout<<b[i].tong<<" ";
     sort(b, b+3,ss);
    cout<<"\n Truong co tong diem cao nhat la:";
    for(int i=0;i<3;i++)
    {
    	cout<<b[i].name;
    	if(b[i].tong!=b[i+1].tong)
    	break;
	}
    cout<<"\n so thi sinh cac truong A, B, C lan luot la: ";
    for(int i=0;i<3;i++)
	 cout<<c[i]<<" ";
	    }
    
	
	
	 


