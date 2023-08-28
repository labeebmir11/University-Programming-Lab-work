# include <stdio.h>
int main()
{	
	int num;
	printf("Enter a number\n");
	scanf("%d", &num);
	
	switch(num > 1)
{	
	case 1:
		printf("Positive\n");
		break;
		
	case 0: 
		if (num == 0)
		printf("Zero\n");
		
		else
		printf("Negative\n");
}
	
}
