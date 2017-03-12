#include<bits/stdc++.h>
using namespace std;
# define MOD	104395301
int main()
{
	char a[101];
	scanf("%s",&a);
	int l=strlen(a);
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]==a[i+1])
		{
			int j=i;
			while(j!=l-2)
			{
				a[j]=a[j+2];
				j++;
			}
			i=-1;;
			a[l-1]='\0';
			a[l-2]='\0';
			l-=2;
		}
	}
	if(a[0]=='\0')	cout<<"Empty String\n";
	else
		cout<<a;
	return 0;
}

