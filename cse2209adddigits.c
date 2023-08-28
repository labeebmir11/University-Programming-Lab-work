// Program to add digits of a number.

# include <stdio.h>

int main()
{
	int i, digits, n;
	int sum = 0;
	printf("Enter number of digits \n");
	scanf("%d", &digits);
	
	int number[digits];
	printf("Enter the %d digit number\n", digits);
	for (i = 0; i < digits; i++)
	{
		scanf("%d", &number[i]);
	}
	for (i = 0; i < digits; i++)
	{
		sum = sum + number[i];		
	}
	printf("Sum of digits is %d\n", sum);
	
	
	
}
