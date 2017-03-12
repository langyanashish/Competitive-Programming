#include<bits/stdc++.h>
using namespace std;
#define min(a,b)	(a<b?a:b)
int main()
{
	std::ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>m>>n;
		for(int i=min(m,n);i>1;i--)
		{
			//cout<<i;
			if(m%i==0 && n%i==0)
			{
				m/=i;
				n/=i;
			}
		}
		cout<<m*n<<endl;
	}
	return 0;
}

