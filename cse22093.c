// Q3
# include <stdio.h>
int main()
{
	int i;
	printf("Odd numbers are : \n");
	for (i = 1; i<=100; i++)
	{
		if(i %2 == 0)
		continue;
		
		printf(" %d\t", i);  // to print odd numbers
	}
	printf("Even numbers are : \n");
	for (i = 1; i<=100; i++)
	{
		if(i %2 != 0)
		continue;
		
		printf(" %d\t", i);  // to print even numbers
	}
}
