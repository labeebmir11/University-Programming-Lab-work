// program to calculate tax
# include <stdio.h>

int main()
{
	float income;
	printf("Enter income\n");
	scanf("%f", &income);
	
	if(income < 150000)
	printf("No tax\n");
	
	else if(income > 150000 && income <= 300000)
	printf("Tax = %f\n", 10.0/100 * income);
	
	else if(income > 300000 && income <=500000)
	printf("Tax = %f\n", 20.0/100 * income);
	
	else if(income> 500000)
	printf("Tax  = %f\n", 30.0/100 * income);
	
	return 0;
	
	
	
}
