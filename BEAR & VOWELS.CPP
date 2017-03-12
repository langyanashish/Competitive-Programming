#include<bits/stdc++.h>
using namespace std;
# define MOD	104395301
int main()
{
	int t;
	cin>>t;
	string a;
	while(t--)
	{
		cin>>a;
		int c=0,v=0,z=0;
		int l=a.length();
		for(int i=0;i<l;i++)
			if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='y')
				v++;
			else
				c++;
		for(int i=0;i<l;i++)
		{
			if((a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u' && a[i]!='y') && (a[i+1]!='a' && a[i+1]!='e' && a[i+1]!='i' && a[i+1]!='o' && a[i+1]!='u' && a[i+1]!='y') && (a[i+2]!='a' && a[i+2]!='e' && a[i+2]!='i' && a[i+2]!='o' && a[i+2]!='u' && a[i+2]!='y'))
				z=1;
			//if((a[i]!='a' || a[i]!='e' || a[i]!='i' || a[i]!='o' || a[i]!='u' || a[i]!='y') && (a[i+1]!='a' || a[i+1]!='e' || a[i+1]!='i' || a[i+1]!='o' || a[i+1]!='u' || a[i+1]!='y') && (a[i+2]!='a' || a[i+2]!='e' || a[i+2]!='i' || a[i+2]!='o' || a[i+2]!='u' || a[i+2]!='y'))
		}
		//cout<<c<<" "<<v<<endl;
		if(c > v || z == 1)
			cout<<"hard\n";
		else
			cout<<"easy\n";
	}
	return 0;
}

