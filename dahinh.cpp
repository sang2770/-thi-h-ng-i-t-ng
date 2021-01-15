#include<bits/stdc++.h>
using namespace std;
#define ll long long
class A{
	public:
		A(){cout<<"A";
		}
		void m1(){
			cout<<"A.m1\n";
			m2();
			}
		virtual void m2(){
			cout<<"A.m2\n";
			}
		
};
class B:public A{
	public:
		B(){
			cout<<"B";
			}
		void m1(){
			cout<<"B.m1\n";
			}
		void m2(){
			cout<<"B.m2";
		}
		
};
void fun(A &a){
	a.m1();
	}
int main()
{
//  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
   B b;
   fun(b);
   }

