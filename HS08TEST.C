#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	float y;
	scanf("%f",&y);
	if(x%5==0 && x<=(y-0.5))
	{
		y=y-x-0.50;
	}
	printf("%.2f",y);
	return 0;
}
