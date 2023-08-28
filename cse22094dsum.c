// Program to add digits of a number.
# include <stdio.h>
int main()
{	
	int n,d1, d2, d3, d4; int sum = 0;
	printf("Enter a 4 digit number\n");
	scanf("%d", &n);
	
	d4 = n%10;
	n = n/10;
	
	d3 = n%10;
	n = n/10;
	
	d2 = n%10;
	n = n/10;
	
	d1 = n%10;
	
	sum = d1 + d2 + d3 + d4;
	printf("Sum of digits is %d\n", sum);
	
	
	
	
	
	
}
