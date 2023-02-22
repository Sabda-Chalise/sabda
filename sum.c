#include<stdio.h>
#include<conio.h>
void main()
{
	long int a,i=1,sum=0;
	printf("enter any number\n");
	scanf("%ld",&a);
	while(i<=a)
	{
	
		sum=sum+i;
		i++;

	}
	printf("sum of %ld is %ld",a,sum);
	
	getch();
}
	