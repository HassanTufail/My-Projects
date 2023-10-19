#include<stdio.h>
#include<conio.h>
int main()
{
	double a,b,c,g,h;
	printf("SUBJECTS\n");
	scanf("%lf",&a);
	printf("%lf\n",a);
	scanf("%lf",&b);
	printf("%lf\n",b);
	scanf("%lf",&c);
	printf("%lf\n",c);
	printf("\nPERCENTAGE");
	g=a+b+c;
	h=(g/300)*100;
	printf("\n%lf",h);
}
