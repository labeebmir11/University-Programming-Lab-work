# include <stdio.h>



void number(int i)
{
	
	if (i == 101)
		return;
	printf("%d\n", i);
	number(i+1);
}
int main()
{	
	int n = 1;
	number(n);
}
