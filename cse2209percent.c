// Program to calculate percentage of marks

# include <stdio.h>

int main()
{
	int s1, s2, s3, s4, s5;
	float percentage;
	
	printf("Enter marks of students in s1 through s5 out of 100\n");
	
/*	for (i = 1; i <6; i++)
	{
		printf("Enter marks of student in s%d\n", i );
		scanf("%d", &s[i]);
	}*/
	
	
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
	
	percentage = (s1+s2+s3+s4+s5) * 100 /500;
	
	printf("Percentage of student is %f\n", percentage);
	
	return 0;
}
