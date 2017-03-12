#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int t;
	int games;
	int I,Q,count=0,j,k;
	cin>>t;
	long long int N,n;
	while(t--)
	{
		cin>>games;
		for(int i=0;i<games;i++)
		{
			count=0;
			cin>>I>>N>>Q;
			n=N;
			if(n%2==0)
				cout<<n/2<<endl;
			else
			{
				if(I==1)
				{
					j=n/2;
					k=(n/2)+1;
					if(Q==1)
						cout<<j<<endl;
					else
						cout<<k<<endl;
				}
				else if(I==2)
				{
					j=(n/2)+1;
					k=n/2;
					if(Q==1)
						cout<<j<<endl;
					else
						cout<<k<<endl;
				}
			}
		}
	}
	return 0;
}

