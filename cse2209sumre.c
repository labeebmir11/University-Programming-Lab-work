# include <stdio.h>
int i = 1, n;
int sum(int i, int n)
{
	int s = 0;
	if (i == n)
	return;
	else{
	s = i + sum(i + 1,n);
	}
	return s;
}


int main()
{	
	int sum_;
	printf("Enter the value of n\n");
	scanf("%d", &n);
	sum_ = sum(i,n);
	printf("Sum of numbers from 1 to %d is %d\n", n, sum_);
	return 0;
	
}
