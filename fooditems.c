#include<stdio.h>
main()
{
	int N;//HERE N IS FOOD ITEM NUMBER//
	printf("Enter food item number:\n");
	scanf("%d",&N);
	switch(N)
	{
		case 1:printf("Food item-Sandwhich\n Price-Rs149");
		        break;
		case 2:printf("Food item-French Fries\n Price-Rs99");
		        break;
		case 3:printf("Food item-Pasta\n Price-Rs179");
				break;
		case 4:printf("Food item-Burger\n Price-Rs129");
				break;
		case 5:printf("Food item-Pizza\n Price-Rs239");
				break;
		default:printf("Invalid number");
				break;
	}
}
