#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
int main()
{
	int t;
	cin>>t;
	char x[100010],y[100010],z[100010];
	while(t--)
	{
		cin>>x>>y;
		LL l=strlen(x);
		LL count=0;
		LOOP(i,l)
		{
			if(x[i] == 'W' && y[i] == 'W')
				cout<<"B";
			else if(x[i] == 'B' && y[i] == 'B')
				cout<<"W";
			else
			{
				cout<<"B";
			}	
		}
		cout<<endl;
	}
	return 0;
}

