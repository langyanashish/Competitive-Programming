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
	while(t--)
	{
		LL n;
		cin>>n;
		string a[n+1];
		LOOP(i,n)
			cin>>a[i];
		LL l=a[0].length();
		LOOP(i,n)
		{
			if(a[i][l-1]=='A')
			{
				if(a[i][0] == '0')
				{
					int j;
					for(j=0;j<l-1;j++)
						a[i][j]=a[i][j+1];
					a[i][j]='\0';
				}
				if(a[i][2]=='0')
				{
					int j;
					for(j=2;j<l-1;j++)
						a[i][j]=a[i][j+1];
					a[i][j]='\0';
				}
			}
		}
		LOOP(i,n)
			cout<<a[i]<<endl;
	}
	return 0;
}

