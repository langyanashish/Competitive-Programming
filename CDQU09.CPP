#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char a[MAX];
		scanf("%s",&a);
		char b[MAX];
		int j=0;
		for(int i=0;i<strlen(a);i++)
		{
			int temp=i*i;
			while(temp>=0){
				int r=temp%10;
				b[j++]=47+r;
				temp/=10;
			}
			if(a[i]!=' ' && a[i+1]!=' ')
			{
				b[j+1]='-';
				j+=2;
			}
			else if(a[i]!=' ' && a[i+1]==' ')
			{
				b[j+1]='$';
				j+=2;
				i++;
			}
		}
		printf("%s\n",b);
	}
	return 0;
}

