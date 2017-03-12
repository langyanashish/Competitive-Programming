/* August Challenge 2013 */
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
		cin>>n;
		int a[n+1];
		LOOP(i,n)	cin>>a[i];
		int start,end;
		cin>>start>>end;
		int ans=INT_MAX,ans1=INT_MAX,ans2=INT_MAX,sum=0,temp=0;
			sum=0;
			for(int i=start-1;i<end-1;i++)
				sum+=a[i];
			ans1=sum;
			sum=0;
			temp=0;
			if(start>1)
				sum=2*a[start-2];
			else
				sum=2*a[n-1];
			temp=2*a[end-1];
			ans=min(ans1,ans1+sum);
			ans=min(ans,ans1+temp);
			ans=min(ans,ans1+temp+sum);
			ans1=ans;
			ans=INT_MAX;			
			sum=0;
			for(int i=start-1;i>0;i--)
				sum+=a[i-1];
			for(int i=n-1;i>=end-1;i--)
				sum+=a[i];
			ans2=sum;
			sum=0;
			temp=0;
			sum=2*a[start-1];
			temp=2*a[end-2];
			ans=min(ans2,ans2+temp);
			ans=min(ans,ans2+sum);			
			ans=min(ans,ans2+temp+sum);
			ans2=ans;
			ans=INT_MAX;
		ans=min(ans1,ans2);
		cout<<ans<<endl;
	}
	return 0;
}

