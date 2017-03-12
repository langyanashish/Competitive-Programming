#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;
int a[10001][10001];
void save()
{
		LOOP(i,10001)
			LOOP(j,10001)
				a[i][j]=0;
		a[0][0]=0;
		int c=1,d=4;
		for(int i=1;i<=10000;i++)
		{
			if(i&1)
			{
				a[i][i]=c;
				c+=4;
			}
			else
			{
				a[i][i]=d;
				d+=4;
			}
		}
		c=2;
		for(int i=2;i<=10000;i++)
		{
			if(i%2 == 0)
			{
				a[i][i-2]=c;
				c++;
			}
			else
			{
				a[i][i-2]=c;
				c+=3;
			}
		}
}
int main()
{
	int t;
	cin>>t;
	save();
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		if(x==0 && y==0)
			cout<<a[0][0]<<endl;
		else if(a[x][y] == 0)
			cout<<"No Number\n";
		else
			cout<<a[x][y]<<endl;
	}
	return 0;
}

