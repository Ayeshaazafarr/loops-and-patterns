#include<stdio.h>
int main()
{
	int number;
	printf("Enter your number: ");
	scanf("%d" , &number);
	
	if(number > 0)	
	{
		printf("The number entered is positive");
	} else if (number < 0 ) {
		printf("The number entered is negative");
	} else {
		printf("The number entered is zero");
	}
	
	return 0;
}
