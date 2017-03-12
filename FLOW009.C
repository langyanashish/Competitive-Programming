#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		float qty,price,amount;
		scanf("%f%f",&qty,&price);
		if (qty >= 1000) {
            printf ("%.6f\n", qty * price * 0.9);
        } else {
            printf ("%.6f\n", qty * price);
        }
	}
	return 0;
}
