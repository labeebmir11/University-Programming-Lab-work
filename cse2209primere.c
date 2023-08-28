#  include <stdio.h>

void isPrime(int a, int b)
{
	if (a == b)
		return;
	else
	{	
		int i = 2;
		while(i < a)
		{
			if (a % i == 0)
			{	
				isPrime(a + 1, b);
			}
			else{	
				printf("%d\n", a);
				a++;
				isPrime(a,b);
			}
		}
	}
	
}





int main()
{
	int a, b;
	printf("Enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	isPrime(a,b);
	printf("Hello\n");
}
