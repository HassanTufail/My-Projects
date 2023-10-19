#include<stdio.h>
#include<conio.h>
int main()
{
	char food;
	int q,t;
	printf("Enter your order:");
	scanf("%c",&food);
	printf("Enter quantity:");
	scanf("%d",&q);
	switch(food)
	{
		case 'B':
			t=q*200;
		printf("Burger %d %d",q,t);
		break;
		case 'F':
			t=q*50;
		printf("Fries %d %d",q,t);
		break;
		case 'P':
			t=q*500;
		printf("Pizza %d %d",q,t);
		break;
		case 'S':
			t=q*150;
		printf("Sandwiches %d %d",q,t);
		break;
		default:
		printf("invalid order");
	}
}
