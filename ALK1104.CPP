#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int flag=0;
		for(int i=1;i<20;i++)
		{
			if(n==pow(2,i))
				flag=1;
		}
		if(flag)
			{
				cout<<"BKUL"<<endl;
			}
			else{
				cout<<"BMEENA"<<endl;
			}
	}
	return 0;
}

