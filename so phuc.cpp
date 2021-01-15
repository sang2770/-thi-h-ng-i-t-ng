#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Sp{
	
	float thuc, ao;
	public:
	Sp(){}
	Sp(float thuc, float ao)
	{
		this->thuc=thuc;
		this->ao=0;
		}
	friend Sp operator+(Sp a, Sp b);
	friend istream &operator>>(istream &it, Sp &p);
	friend ostream &operator<<(ostream &it, Sp &p);

		
};
Sp operator+(Sp a, Sp b)
{
	Sp t;
	t.thuc=a.thuc+b.thuc;
	t.ao=b.ao+a.ao;
	return t;
	}
istream &operator>>(istream &it, Sp &p)
{
	it>>p.thuc>>p.ao;
	return it;
	}
ostream &operator<<(ostream &it, Sp &p)
{
	it<<p.thuc<<"+"<<p.ao;
	return it;
	}
int main()
{
//  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
    Sp a(1, 0);
    Sp  b(1, 1);
    Sp c=a+b;
    cout<<c;
    }
    

