#include<bits/stdc++.h>
using namespace std;
#define ll long long
template<class T>
T TBC(T *a, T &n)
{
	cin>>n;
	a=new T [(int)n+1];
	T tong=0;
	for(int i=0;i<n;i++)
    {
	 cin>>a[i];
	 tong+=a[i];}
	return tong/(T)n;
	 
}
int main()

{
	int n;
	int *a;
	long m;
	char k;
	long *b;
	double *c;
	double l;
	char *d;
	cout<<"Trung binh cong day so kieu int="<<TBC(a, n);
	cout<<"Trung binh cong day so kieu long="<<TBC(b, m);
	cout<<"Trung binh cong day so kieu double="<<TBC(c, l);
	cout<<"Trung binh cong day so kieu char="<<TBC(d, k);
	
	
	
}

