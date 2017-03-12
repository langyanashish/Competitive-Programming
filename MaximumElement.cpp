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
	LL n;
	cin>>n;
	stack<LL>s,z;
	LOOP(i,n)
	{
		LL t,x;
		cin>>t;
		LL temp;
		if(t==1)
		{
			cin>>x;
			if(s.empty())
			{
				s.push(x);
				z.push(x);
			}
			else
			{
				if(x > z.top())
					z.push(x);
				else
					z.push(z.top());
				s.push(x);
			}
		}
		else if(t==2)
		{
			if(!s.empty())
			{
				s.pop();
				z.pop();
			}
		}
		else
		{
			cout<<z.top()<<endl;
		}
	}
	return 0;
}
