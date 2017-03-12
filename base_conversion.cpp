#include<stdio.h>
 
long signed int other_to_decimal(long signed int,long signed int);
long signed int decimal_to_other(long signed int,long signed int);
 
int main()
{
int t,i;
long signed int inputbase[100],outputbase[100],inputnumber[100],outputnumber[100],s[100];
scanf("%d",&t);
 
for(i=0;i<t;i++)
{
scanf("\n%ld %ld",&inputbase[i], &outputbase[i]);
scanf("\n%ld",&inputnumber[i]);
}
 
for(i=0;i<t;i++)
{
	if(outputbase[i]==10)
	{
		outputnumber[i]=other_to_decimal(inputnumber[i],inputbase[i]);
	}
	else
	{
		if(inputbase[i]==10)
		{
			outputnumber[i]=decimal_to_other(inputnumber[i],outputbase[i]);
		}
		else
		{
			s[i]=other_to_decimal(inputnumber[i],inputbase[i]);
			outputnumber[i]=decimal_to_other(s[i],outputbase[i]);
		}
	}
	printf("\n%ld",outputnumber[i]);
}
return 0;
}
 
long signed int other_to_decimal(long signed int in,long signed int ib)
{
	long signed int k,op,s,p;
	op=0;
	k=in;
	p=1;
	while(k!=0)
	{
		s=k%10;
		k=k/10;
		op=op+s*p;
		p=p*ib;
	}
	return op;
}
 
long signed int decimal_to_other(long signed int on,long signed int ob)
{
	long signed int op=0,p,k,s;
	k=on;
	p=1;
	while(k!=0)
	{
		s=k%ob;
		k=k/ob;
		op=op+s*p;
		p=p*10;
	}
	return op;
}  
