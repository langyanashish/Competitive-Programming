#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		char a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int Y=0,N=0,I=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]=='Y')	Y++;
			if(a[i]=='N')	N++;
			if(a[i]=='I')	I++;
		}
		if(I==0 && Y>0)
			cout<<"NOT INDIAN\n";
		else if(Y==0 && I>0)
			cout<<"INDIAN\n";
		else if(Y==0 && I==0)
			cout<<"NOT SURE\n";
	}
	return 0;
}

