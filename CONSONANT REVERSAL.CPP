#include<bits/stdc++.h>
using namespace std;
# define MOD	104395301
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		cin>>a;
		int i=0,j=a.length()-1;
		char ch;
		while(i < j)
		{
			if((a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')&&(a[j]=='a' || a[j]=='e' || a[j]=='i' || a[j]=='o' || a[j]=='u'))
			{
				i++;
				j--;
			}
			else if((a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')&&(a[j]!='a' || a[j]!='e' || a[j]!='i' || a[j]!='o' || a[j]!='u'))
				i++;
			else if((a[i]!='a' || a[i]!='e' || a[i]!='i' || a[i]!='o' || a[i]!='u')&&(a[j]=='a' || a[j]=='e' || a[j]=='i' || a[j]=='o' || a[j]=='u'))
				j--;
			else
			{
				ch=a[i];
				a[i]=a[j];
				a[j]=ch;
				ch='\0';
				i++;
				j--;
			}
		}
		cout<<a<<endl;
	}
	return 0;
}

