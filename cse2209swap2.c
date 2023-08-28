#include <stdio.h>

int main()
{
	int a, b, x;
	printf("Enter a\n");
	scanf("%d", &a);
	
	printf("Enter b\n");
	scanf("%d", &b);
	
	/*a = a+b;
	b = a-b;
	a = a-b;*/
	
	a = a*b;
	b = a/b;
	a = a/b;
	
	printf("Swapped values of a and b are %d and %d\n", a, b);
}
