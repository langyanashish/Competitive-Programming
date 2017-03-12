#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		cin>>a;
		int flag=0;
		for(int i=0;i<a.length();i++)
		{
			if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
				flag=1;
		}
		if(flag & 1)
			cout<<"yes\n";
		else
			cout<<"no\n";
	}
	return 0;
}

