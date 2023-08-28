# include <stdio.h>

int main()
{
	int i,n, f;
	printf("Print the number whose factorial you want\n");
	scanf("%d", &n);
	
	 for (i = n; i > 0; i--)
	 {
	 	f = n * (n-1);
	 	
	 }
	 printf("Factorial of the given number is %d\n", f);
	 
	 return 0;
}
