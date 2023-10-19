#include<stdio.h>
#include<conio.h>
int main()
{
	int a=5,b,c,d,e=4;
	for(b=1;b<=a;b++)
	{
		for(c=1;c<=e;c++)
		{
			printf(" ");
		}
		e--;
		for(d=1;d<=b;d++)
		{
			printf("*");
		}
		printf("\n");
	}
}
