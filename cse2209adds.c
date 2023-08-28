# include <stdio.h>

int a, b, op;


int add(int, int);
int main()
{	
	printf("Enter a and b\n");
     scanf("%d %d", &a,&b);
	add(a,b);
}
int add(int a, int b)
{
	printf("%d", a+b);
	return a + b;
}
