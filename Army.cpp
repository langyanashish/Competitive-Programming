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
	int t;
	cin>>t;
	while(t--)
	{
		LL n;
		cin>>n;
		LL a[n];
		LL maxim=INT_MIN;
		LOOP(i,n)
		{
			cin>>a[i];
			maxim=max(maxim,a[i]);
		}
		bool flag=false,f=false;
		LL t1,t2,t3,temp;
		LOOP(i,n)
		{
			if(a[i] != maxim)
			{
				f=false;
				flag=false;
				temp=t1=t2=t3=a[i];
				while(t1<=maxim || t2<=maxim || t3<=maxim)
				{
					if(t1==maxim || t2==maxim || t3==maxim)
					{
						f=true;
						cout<<"Done\n";
						break;
					}
					else
					{
						t1*=2;
						t2*=3;
						t3*=5;
					}
				}
				if(f == false)
				{
					flag=true;
					break;
				}
			}
		}
		if(flag == false)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}

