#include<bits/stdc++.h>
using namespace std;

int main()
{
	string c;
	int arr[100001]; int temp,num=0;
	int i=0,j=0;
	getline(cin,c);
	while(c[i]!='\0')
	{
		if(c[i]==' ')
		{
			arr[j++]=num;
			i++;
		}
		while(c[i]!=' ')
		{
			temp=c[i]-'0';
			num=num+temp;
			num=num*10;
			i++;
		}
		num=num/10;
		
	}
	for(int j=0;j<i;j++)
		cout<<arr[i]<<" ";
		
	return 0;
}
