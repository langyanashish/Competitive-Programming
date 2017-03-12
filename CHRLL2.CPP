#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int c=0,h=0,e=0,f=0;
	for(int i=0;i<a.length();i++)
	{
		if(a[i]=='C')
		{
			c++;
		}
		else if(a[i]=='H')
		{
			if(h<c)
				h++;
		}
		else if(a[i]=='E')
		{
			if(e<h)
				e++;
		}
		else if(a[i]=='F')
		{
			if(f<e)
				f++;
		}
	}
	cout<<f<<endl;
	return 0;
}

