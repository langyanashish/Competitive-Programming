# include <math.h>
# include<stdio.h>
int main()
{
int i=0, bin=0 ,den ,rem;
printf("Enter the decimal number");
scanf("%d",&den);
while(den!=0)
{ rem=den%2;
bin=bin+rem*pow(10,i);
den=den/2;
i++;
}
printf("The binary equivalent is %d",bin);
}

