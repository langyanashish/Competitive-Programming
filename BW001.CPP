#include<bits/stdc++.h>
using namespace std;
int a[10000000][2];
void reset()
{
	for(int i=0;i<10000000;i++)
		for(int j=0;j<2;j++)
		a[i][j]=0;
}
int main()
{
	long long int t;
	scanf("%d",&t);
	long long int c;
	long long int id;
	reset();
	long long int z=0;
	while(t--)
	{
		scanf("%d",&c);
		scanf("%lld",&id);
		if(c==1)
		{
			a[z][0]=id;
			a[z][1]=1;
			z++;			
			/*if(id<=100000)
				a[id-1][0]=1;
			else
				a[id-100000-1][1]=1;*/
		}
		if(c==2)
		{
			int flag=0;
			for(int k=0;k<=z;k++)
				if(a[k][0]==id)
					if(a[k][1]==1)
						flag=1;
			if(flag==1)	printf("yes\n");
			else	printf("no\n");
					
		}
	}
	return 0;
}
