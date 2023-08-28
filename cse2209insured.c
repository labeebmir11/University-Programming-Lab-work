# include <stdio.h>

int main()
{
	char status, gender;
	int age;
	
	printf("Enter y for married and n for unmarried\n");
	scanf("%c", &status);
	printf("Enter m for male and f for female\n");
	scanf("%c", &gender);
	/*printf("Enter age of driver\n");
	scanf("%d", &age);
	
	if (status == 'y')
	{
		printf("Driver is insured\n");
	}
	
	else if (status == 'n')
	{
		if(gender == 'm')
		{
			if (age > 30)
			{
				printf("Driver is insured\n");
			}
			else if ( age <= 30)
			printf("Driver is not insured\n");
		}
		
		else if(gender == 'f')
		{
			if(age > 25)
			{
			printf("Driver is insured\n");
		    }
		    else if (age <= 25)
		    printf("Driver is not insured\n");
		}
	
	}*/
	return 0;
	
}
