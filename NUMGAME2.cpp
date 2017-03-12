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
		int s=n;
		for(int i=0;i<=s/4;i++)
		{
			if(n==(4*i)+1){
				flag=0;
				break;
			}
			else{
				flag=1;
			}
		}
		if(flag==1)
			cout<<"BOB\n";
		else
			cout<<"ALICE\n";
	}
	return 0;
}
