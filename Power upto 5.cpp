#include<stdio.h>
int main()
{int j;
int power=1;
int i;
for(j=1;j<=5;j++)
{
	for(i=1;i<=5;i++)
	{
		power=power*j;
		printf("\t%d^%d=%d\n",j,i,power);
	}
	power=1;
}
}
