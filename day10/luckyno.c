/* to print lucky no of a no */
#include<stdio.h>
main()
{
	long int r,n,sum=0;
	printf("enter the value :");
	scanf("%ld",&n);
	test: while(n>0)
	{
		r=n%10;
		sum+=r;
		n=n/10;
	}
	if(sum<10)
	printf("\n Lucky no : %ld",sum);
	else
	{
		n=sum;
		sum=0;
		goto test;
	}
}
