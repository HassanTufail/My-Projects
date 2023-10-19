#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,e;
	printf("Enter First Angle\n");
	scanf("%d",&a);
	printf("Enter Second Angle\n");
	scanf("%d",&b);
	printf("Enter Third Angle\n");
	scanf("%d",&c);
	d=180;
	e=a+b+c;
	if(e<=d)
		printf("Triangle is valid");
	else(e>>d);
		printf("Triangle is invalid");	
}
