//1.
# include <stdio.h>
int main()
{
	int n, r;
	printf("Enter a number\n");
	scanf("%d", &n);
	//r = n % 2;
	
	switch(n % 2 != 0)
	{
		case 0: 
		printf("Number is even/n");
		break;
		
		case 1:
	    printf("Number is odd\n");
	    break;
	    
	    default:
	    	printf("Invalid input\n");
	}	
	return 0;
}
