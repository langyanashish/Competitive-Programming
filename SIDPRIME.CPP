#include<bits/stdc++.h>
using namespace std;
# define MOD	104395301
bool prime[1000000]={0};
bool hash[1000000]={0};
void prime()
{
    p[1]=1;
    for(i=2;i<1000001;i++)
    {
        if(p[i]==0)
        {
            for(j=i*i;j<1000001;j+=i)
            p[j]=1;
        }
    }
}
void sieve(int max)
{
    int i,j,k;
    prime[0] = 0;
    for(i=1;i<=max+1;i++)
    {
    	prime[i] = 0;
    	//hash[i]=0;
	}
    for(j=1;j<=max+1;j++){
    	k=sqrt(j);
	for(i=2;i<=k;i++)
    {
    	if(j%i==0)
    		prime[j]++;
    }
	}
}
int main()
{
	std::ios::sync_with_stdio(false);
	int n;
	cin>>n;
	//for(int i=1;i<20;i++)	cout<<i<<" "<<prime[i]<<endl;
	int a[n];
	int max=0;
	for(int i=0;i<n;i++)	
	{
		cin>>a[i];
		hash[a[i]]++;
		if(a[i]>max)	max=a[i];
	}
	sieve(max);
	int q;
	cin>>q;
	while(q--)
	{
		int l,r;
		cin>>l>>r;
		int c=0;
		for(int i=l+1;i<r;i++)
		{
			if(prime[i]==0 && hash[i]>0)
				c++;
		}
		cout<<c<<endl;
	}
	return 0;
}

