#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	double h,c;
	printf("Enter First number\n");
	scanf("%d",&a);
	printf("Enter Second number\n");
	scanf("%d",&b);
	printf("Enter the operator to be performed\n");
	scanf("%lf",&h);
	if(h=='+')
	{
		h=='+';
		c=a+b;
		printf("%lf",c);
	}
	if(h=='*')
	{
		c=a*b;
		printf("%lf",c);
	}
	else if(h=='/')
	{
		c=a/b;
		printf("%lf",c);
	}
	else (h=='%');
	{
		c=a%b;
		printf("%lf",c);
	}
	
}
