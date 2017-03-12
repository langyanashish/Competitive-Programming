#include<bits/stdc++.h>
using namespace std;
int deno[13];
#define MOD 1000000007
long long int power(long long int a,long long int n)
{
	if(n==0)
		return 1;
	if(n % 2 == 1)
		return (power(a, n/2) %MOD * power(a, n/2) %MOD * a % MOD) % MOD;
	else
		return (power(a, n/2) % MOD *power(a, n/2) %MOD) % MOD; 
}
int main()
{
	int t;
	cin>>t;
	for(int i=1;i<=12;i++)
		deno[i]=power(2,i-1);
	while(t--)
	{
		int price;
		cin>>price;
		int c=0;
		for(int i=12;i>0;i--)
		{
			//cout<<deno[i]<<endl;
			if(price>=deno[i])
			{
				price-=deno[i];
				c++;
				i++;
				if(price==0)
					break;
			}	
		}
		cout<<c<<endl;	
	}
	return 0;
}

