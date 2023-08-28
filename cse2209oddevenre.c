# include <stdio.h>

void oddeven(int x, int y)
{
	if(x == y)
		return;
		
	else
	{
		if(x % 2 == 0)
		{
			printf("Even: %d\n", x);
			x++;
			oddeven(x, y);
		}
		else
		{
			if (x % 2 !=0)
			{
				printf("Odd: %d\n", x);
				x++;
				oddeven(x, y);
			}
		}
	}
	
	
	
	
}

int main()
{
	int a, b;
	printf("Enter the range values a and b\n");
	scanf("%d%d", &a,&b);
	oddeven(a,b);
	printf("Hello\n");
	return 0;
}
