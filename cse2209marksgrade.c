// Program to calculate percentage and grade

# include <stdio.h>


int main()
{
	int s1, s2, s3, s4, s5;
	float percentage, marks;
	
	printf("Enter marks of students in s1 through s5 out of 100\n");
	
	
	
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
    
	marks = s1+s2+s3+s4+s5;
	percentage = (marks/500.0) * 100;
	
	printf("Percentage of student is %f ", percentage);
	
	if(percentage > 90 && percentage < 100)
	printf("Grade A\n");
	
	else if(percentage > 80 && percentage < 90)
	printf("Grade B\n");
	
	else if(percentage > 70 && percentage < 80)
	printf("Grade C\n");
	
	else if(percentage > 60 && percentage < 70)
	printf("Grade D\n");
	
	else if(percentage > 50 && percentage < 60)
	printf("Grade D\n");
	
	else
	printf("Fail\n");
	
	
	
	
}


