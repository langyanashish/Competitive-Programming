#include<bits/stdc++.h>
using namespace std;
long long simple(long long temp)
{
	long long s=0;
	while(temp)
	{
		int r=temp%10;
		if(r & 1)	s+=r;
		else	s=s+(2*r);
		temp/=10;
	}
	return s;
}
int main()
{
	std::ios_base::sync_with_stdio(false);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long a,b,temp;
		int sum=0,s=0,d=0;
		scanf("%lld%lld",&a,&b);
		for(long long i=a;i<=b;i++)
		{
			s=simple(i);
			int d=s%10;
			sum+=d;
			//cout<<s<<endl<<d<<endl;
		}
		printf("%d\n",sum);
	}
	return 0;
}

