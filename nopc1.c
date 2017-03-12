#include<stdio.h>
#include<string.h>
#define pb		push_back
#define mod		1000000007
int main()
{
	char a[50];
	gets(a);
	char b[50];
	gets(b);
	int ans=strstr(a,b);
	if(ans)
		printf("Y");
	else
		printf("N");
	return 0;
}

