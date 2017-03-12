#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;

int main()
{
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	int n;
	int p=0,q=0,r=0;
	queue<int>a,b,c;
	LOOP(i,n1)
	{
		cin>>n;
		p+=n;
		a.push(n);
	}
	LOOP(i,n2)
	{
		cin>>n;
		q+=n;
		b.push(n);
	}
	LOOP(i,n3)
	{
		cin>>n;
		r+=n;
		c.push(n);
	}
	cout<<p<<" "<<q<<" "<<r<<endl;
	while(1)
	{
		if(p==q && q==r && p==r)
			break;
		else
		{
			if(p>=q && p>=r)
			{
				n=a.front();
				a.pop();
				p-=n;
				cout<<p<<" 1\n";
			}
			else if(q>=p && q>=r)
			{   
				n=b.front();
				b.pop();
				q-=n;
				cout<<q<<" 2\n";
			}
			else
			{
				n=c.front();
				c.pop();
				r-=n;
				cout<<r<<" 3\n";
			}
		}
	}
	cout<<p;
	return 0;
}

