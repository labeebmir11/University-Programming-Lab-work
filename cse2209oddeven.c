// Program to0 check even or odd
# include <stdio.h>

int main()
{
	int n, r;
	
	printf("Enter a number\n");
	scanf("%d", &n);
	
	if (n%2 == 0)
	printf("Number is even\n");
	
	else
	{
		printf("Number is odd\n");
		printf("Remainder is %d\n", n%2);
	}
	
	return 0;
}

