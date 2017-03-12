#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
int id[1000010];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		LL temp=0;
		string a;
		LL N,f,y,pos,ans,x;
		cin>>N;
		char d;
		pos=0;
		ans=0;
		LOOP(i,N)
		{
			cin>>f;
			cin>>d;
			x=d-'0';
			id[i]=f;
			temp=x;
			y=f-1;
			if(x%3==0)
				ans+=f;
			if(x%3==0)
				while(y--)
				{
					temp=temp*10+x;
					if(temp%3==0)
						ans++;
				}
			while(f--)
				a+=d;
		}
		LL l=a.length();
		//cout<<a<<" "<<ans<<endl;
		temp=0;
		pos=0;
		for(int i=0;i<N;i=i+1)
		{
			pos+=id[i];
			if(i==0)
				pos--;
			temp=a[y]-'0';
			for(int j=pos+1;j<l;j++)
			{
				x=a[j]-'0';
				temp=temp*10+x;
				//cout<<temp<<endl;
				if(temp%3==0)
				{
						ans++;
					//cout<<temp<<" "<<ans<<endl;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

