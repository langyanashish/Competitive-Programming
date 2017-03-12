#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
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
		char a[60];
		cin>>a;
		bool flag=true;
		int l=strlen(a);
		LOOP(i,l-1)
		{
			if(a[i]!='z' && a[i]!='a')
			{
				if(a[i+1]!=a[i]+1 && a[i+1]!=a[i]-1)
				{
					flag=false;
					break;
				}
			}
			else
			{
				if(a[i]=='z')
				if(a[i+1]!='a' && a[i+1]!='y')
				{
					flag=false;
					break;
				}
				if(a[i]=='a')
				{
					if(a[i+1]!='b' && a[i+1]!='z')
					{
						flag=false;
						break;
					}
				}
			}
		}
		if(flag==false)	
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
	return 0;
}

