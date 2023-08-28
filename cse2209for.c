# include <stdio.h>

int main()
{
	int elements[2][2];
	int i,j,sum = 0;
	printf("Enter the 4 elements\n");
	
	for(i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
		scanf("%d", &elements[i][j]);
		//printf("%d\n", elements[i][j]);
		}
	}
	
	for(i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
		sum = sum + elements[i][j];
		//printf("%d\n", elements[i][j]);
		}
	
	}
		printf("Sum of elements is %d\n", sum);
		
		
	
	return 0;
}
