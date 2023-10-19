#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
float h;
printf("Enter the Hardness of Steel\n");
scanf("%d",&a);
printf("Enter the Carbon Content of Steel\n");
scanf("%lf",&h);
printf("Enter the Tensile Strength of Steel\n");
scanf("%d",&b);
if(a>50&&h<0.7&&b>5600)
{
printf("Grade of Steel is 10");	
}
if(a>50&&h<0.7)
{
printf("Grade of Steel is 9");
}
if(b>5600&&h<0.7)
{
printf("Grade of Steel is 8");
}
if(a>50&&b>5600)
{
printf("Grade of Steel is 7");
}
if(a>50||h<0.7||b>5600)
{
printf("Grade of Steel is 6");
}
if(a>50);!!(h<0.7);!!(b>5600);
{
printf("Grade of Steel is 5");
}	
}
