#include<bits/stdc++.h>
using namespace std;

int main()
{
	char c[10001];
	int arr[100001]; int temp,num=0;
	int i=0,j=0;
	gets(c);
	while(c[i]!='\0')
	{
		if(c[i]==' ')
		{
			arr[j++]=num;
		}
		while(c[i]!=' ')
		{
			temp=int(c[i]);
			num=num+temp;
			num=num*10;
			i++;
		}
		num=num/10;
		i++;
	}
	for(int j=0;j<i;j++)
		cout<<arr[i]<<" ";
		
	return 0;
}
