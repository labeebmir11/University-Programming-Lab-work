// Program to reverse a 4 digit number
# include <stdio.h>

int main()
{	
	int n,c, d1, d2, d3, d4, rev_n;
	printf("Enter a 4 digit number\n");
	scanf("%d", &n);
	c = n;
	
	d4  = n%10;
	n = n/10;
	
	d3 = n%10;
	n = n/10;
	
	d2 = n%10;
	n = n/10;
	
	d1 = n%10;
	
	rev_n = d1*1+d2*10+d3*100+d4*1000;
	printf("Reverse of the given 4 digit number is %d\n", rev_n);
	
	if(c == rev_n)
	printf("Given number is a palindrome\n");
	
	else
	printf("Given number is not a palindrome\n");
	
	
	
}
