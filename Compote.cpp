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
	int a,b,c;
	cin>>a>>b>>c;
	if(b<2 || c<4)
	{
		cout<<"0";
		return 0;
	}
	else
	{
		while(a>0)
		{
			int x=a*2;
			int y=a*4;
			if(b>=x && c>=y)
			{
				cout<<a+x+y;
				return 0;
			}
			else
				a--;
		}
	}
	return 0;
}

