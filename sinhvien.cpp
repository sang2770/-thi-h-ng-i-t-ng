#include<bits/stdc++.h>
using namespace std;
#define ll long long
class monhoc{
	private:
		string ten;
//		int  gtri;
		int sotin;
		int mamon;
	public:
		~monhoc()
		{
		}
		void nhap()
		{
			cout<<"Nhap ten mon:";
			fflush(stdin);
			getline(cin, ten);
			cout<<"Nhap spo tin:";
			cin>>sotin;
			cout<<"Nhap ma mon:";
			cin>>mamon;	
		}
		void xuat()
		{
			cout<<"Ten mon:"<<ten<<endl;
			cout<<"Ma mon:"<<mamon<<endl;
			cout<<"so tin:"<<sotin<<endl;
		}
		int gettin()
		{
			return sotin;}
		string getname(){
			return ten;
		}
			
		
	};
int n;
class sinhvien{
	private:
		string name;
		int *check=new int[n+1];
		int masv;
		int res;
		
	public:
		~sinhvien(){
			delete[] check;
		}
		void nhap()
		{
			cout<<"Nhap ten sinh vien:";
			fflush(stdin);
			getline(cin, name);
			cout<<"Nhap ma sinh vien:";
			cin>>masv;
			cout<<"Nhap bangdki:\n";

			
		}
//        int setcheck(int *p)
//        {
//        	check=p;
//		}
		int *getcheck()
		{
			return check;
			}
		string getten()
		{return name;
	}
	 void setres(int a)
	 {
	 	res=a;
	 }
	 int getres()
	 {
	 	return res;
	 	}

};
//int n;
int main()
{
//  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
cout<<"Nhap so mon:";
cin>>n;
   monhoc a[n+1];
   for(int i=0;i<n;i++)
    a[i].nhap();
     cout<<"\nNhap so sinh vien:";
 int m;
 cin>>m;
 int sum=0;
 sinhvien b[m+1];
 int c[m+1]={};

    for(int i=0;i<m;i++)
    {
//    	int p[n+1];
    	b[i].nhap();
	for(int j=0;j<n;j++)
      {
	    a[j].xuat();
	    cout<<"\nDki(0) k dki(1):";
	    cin>>*(b[i].getcheck()+j);
	    if(*(b[i].getcheck()+j)==1)
        c[i]+=a[j].gettin();
	    
       }     
     b[i].setres(c[i]);
    }
      
    cout<<setw(15)<<left<<"TenSinh Vien"<<"||"<<setw(20)<<"So tin chi dang ki"<<"||"<<endl;
    
    for(int i=0;i<m;i++)
     cout<<setw(15)<<left<<b[i].getten()<<"||"<<setw(20)<<left<<b[i].getres()<<"||"<<endl;
    
    string mon;
    int vt=0;
    fflush(stdin);
    getline(cin, mon);
    for(int i=0;i<n;i++)
     if(mon==a[i].getname())
	  {
	    vt=i;
	   break;
	   }  
	int dem=0;
	cout<<"Danh sach lop:\n";
	cout<<setw(10)<<"STT"<<"||"<<setw(10)<<"Ten"<<"||"<<endl;
	int k=1;
	for(int i=0;i<m;i++)
	  if(*(b[i].getcheck()+vt)==1)
	    {
		dem=0;
	    cout<<setw(10)<<left<<k<<"||"<<setw(10)<<left<<b[i].getten()<<"||"<<endl;
	    k++;
	    }
	}
         
   
    
    
 
   
   

