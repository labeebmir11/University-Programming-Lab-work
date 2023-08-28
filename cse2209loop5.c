// Q5
# include <stdio.h>
int main()
{
	printf("Prime numbers from 1 to 100: ");
	int i = 0;
	int n = 0;
	for (i = 1; i <= 100; i++)
	{	
		if (i % i ==0 && i % 1 ==0)
		printf("%d\t", i);
	}
}
