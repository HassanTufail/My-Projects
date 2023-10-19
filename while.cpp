#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	a=0;
	printf("Enter any number:");
	scanf("%d",&b);
	while(a<10)
	{
		a++;
		c=a*b;
		printf("%dx%d=%d\n",b,a,c);
	}
}
