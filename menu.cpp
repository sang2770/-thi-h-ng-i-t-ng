#include<bits/stdc++.h>
using namespace std;
#define ll long long
int menu()
{
	int chon;
	
	cout<<"\n--MENU--\n";
	cout<<"1.Theem vao queue vao 1 phan tu!\n";
	cout<<"2.lay phan tu ra khoi queue va hien thi le man hinh!\n";
	cout<<"3.Cho biet so phan tu hien co cua queue!\n";
	cout<<"4.Cho biet queue rong hay day!\n";
	cin>>chon;
	return chon;
}

int main()
{
	queue<int> a;
	a.push(1);
	int chon;
	while(chon=menu())
	{
		switch(chon)
		{
			case 1:
			
				cout<<"Nhap phan tu:";
				int n;
				cin>>n;
				a.push(n);
				break;
				
			case 2:
			
				cout<<"phan tu lay ra la :";
				cout<<a.front();
				break;
				
			
			case 3:
			
			    cout<<"So phan tu hien co la :";
			    cout<<a.size();
			    break;
				
			case 4:
			
			    if(a.size()==0)
			    cout<<"Queue rong";
			    else 
			    cout<<" queue da co phan tu!";
			    break;
				
			default:
			break;
		}
		
	}
}


