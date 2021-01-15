#include<bits/stdc++.h>
using namespace std;
#define ll long long
class qlihang{
	private:
		int mahang;
		string ten, xuatxu;
		int loaihang, soluong;
	public:
		void nhap()
		{
			cout<<"Nhap ma hang:";
			cin>>mahang;
			cout<<"Nhap ten hang:";
			fflush(stdin);
			getline(cin, ten);
			cout<<"Nhap xuat xu:";
			fflush(stdin);
			getline(cin, xuatxu);
			cout<<"Nhap loai hang:";
			cin>>loaihang;
			cout<<"nhap so luong:";
			cin>>soluong;
			
		}
		void xuat()
		{
			cout<<setw(10)<<"Ma hang ||"<<setw(10)<<"Ten hang ||"<<setw(10)<<"Xuat xu ||"<<setw(10)<<"Loai hang ||"<<setw(10)<<"So luong ||"<<endl;
			cout<<setw(10)<<mahang<<setw(10)<<ten<<setw(10)<<xuatxu<<setw(10)<<loaihang<<setw(10)<<soluong<<endl;
				}	
		int getsoluong()
		{
			return soluong;
			}	
		int getloaihang()
		{
			return loaihang;
		}
		string getten()
		{
			return ten;
		}
		int getso()
		{
			return soluong;
		}
};
class dientu:public qlihang{
	private:
		int tg;
	public:
		void nhap()
		{
			qlihang::nhap();
			cout<<"Nhap thoi gian bao hanh:";
			cin>>tg;
		}
		void xuat()
		{
			qlihang::xuat();
			cout<<"thoi gian bao hanh:";
			cout<<tg;
		}
		
		
	
};
int main()
{
//  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
    int n;
    cin>>n;
    dientu a[n+1];
    int dem[3]={};
    for(int i=0;i<n;i++)
     {
	   a[i].nhap();
       if(a[i].getloaihang()==1)
       dem[0]+=a[i].getso();
       else if(a[i].getloaihang()==2)
       dem[1]+=a[i].getso();
       else
       dem[2]+=a[i].getso();
       }
    int max=0;
    for(int i=0;i<3;i++)
     if(max<dem[i])
     {
     	max=dem[i];
	 }
    for(int i=0;i<n;i++)
    {
    	cout<<"So hang loai "<<i+1<<"la:"<<dem[i]<<endl;
    		}
    cout<<"loai hang co luong ton kho nhieu nhat la";
    for(int i=0;i<3;i++)
     if(max==dem[i])
      cout<<i+1<<" ";
      
    cout<<"\nNhap ten hang";
    string s;
    int dems=0;
    fflush(stdin);
    getline(cin, s);
    for(int i=0;i<n;i++)
     if(s==a[i].getten())
      {
	  a[i].xuat();
      dem++;
      }
    if(dem==0)
	cout<<"K co mat hang nay!";  
      
  }
    
    
    
    
    

