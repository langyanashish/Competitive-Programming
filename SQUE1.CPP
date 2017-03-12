#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		char a[n];
		scanf("%s",&a);
		for(int i=0;i<q;i++)
		{
			char ch;
			string type;
			cin>>ch>>type;
			int count=0;
			for(int j=0;j<n;j++)
				if(a[j]==ch)
					count++;
			if(count & 1)
			{
				if(type=="odd")	cout<<"yes\n";
				else	cout<<"no\n";
			}
			else
			{
				if(type=="even")	cout<<"yes\n";
				else	cout<<"no\n";
			}
		}	
	}
	return 0;
}

