/*	August Cook-Off 2016	*/
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
		int n;
		string s;
		cin>>n>>s;
		int a[n+1];
		int odd=0,even=0;
		LOOP(i,n)
		{
			cin>>a[i];
			if(a[i]&1)
				odd++;
			else
				even++;
		}
		if(s=="Dee")
		{
			if(even==odd)
				cout<<"Dum\n";
			else
			{
				if(odd>even)
					cout<<"Dum\n";
				else
				{
					even-=odd;
					if(even==1)
						cout<<"Dee\n";
					else
						cout<<"Dum\n";
				}
					
			}					
		}
		else
		{
			if(odd==even)
				cout<<"Dee\n";
			else
				cout<<"Dum\n";
		}
	}
	return 0;
}

