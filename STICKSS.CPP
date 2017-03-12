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
	int a[1010];
	while(t--)
	{
		int n;
		cin>>n;
		LOOP(i,n)
			cin>>a[i];
		LL ans=0;
		sort(a,a+n);
		int i,j=-1,f1=0,f2=0;
		for(int i=n-1;i>=0;i--)
			if(a[i]==a[i-1])
			{
				f1=1;
				ans=a[i];
				j=i-2;
				break;
			}
			for(;j>=0;j--)
				if(a[j]==a[j-1])
				{
					f2=1;
					ans*=a[j];
					break;
				}
		if(f1 == 0 || f2 == 0)
			cout<<"-1\n";
		else
			cout<<ans<<endl;	
	}
	return 0;
}
 #include<stdio.h>
     
    int main()
    {
    	int t;
    	scanf("%d",&t);
    	while(t--)
    	{
    		int n;
    		scanf("%d",&n);
    		int a[n],i,b[1010];
    		for(i=0;i<1010;i++)
    		{
    			b[i]=0;
    		}
    		for(i=0;i<n;i++)
    		{
    			scanf("%d",&a[i]);
    			b[a[i]]++;
    		}
    		int max=0,smax;
    		for(i=0;i<1010;i++)
    		{
    			if(b[i]>=4)
    			{
    				smax = i;
    				max = i;
    			}
    			else if(b[i]>=2)
    			{
    				smax = max;
    				max = i;
    			}
    		}
    		if((smax*max)>0)
    		{
    		    printf("%d\n",smax*max);
    		}
    		else
    		{
    		    printf("-1\n");
    		}
    	}
    	return 0;
    } 
