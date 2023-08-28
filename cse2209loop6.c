//Q6
# include <stdio.h>
int main()
{
	int y;
	for (y = 1900; y <= 2023; y++)
	{	
		
		if (y % 100 == 0  )
		{
			if(y % 400 == 0)
			printf("%d\t");
		}
		else if (y % 4 == 0)
		printf("%d\t", y);
	}
}
