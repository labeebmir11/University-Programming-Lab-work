//Program to calculate area of triangle

# include <stdio.h>

int main()
{
	float base, altitude, area;
	printf("Enter Base of Triangle\n");
	scanf("%f", &base);
	
	printf("Enter Altitude of Triangle\n");
	scanf("%f", &altitude);
	
	area = (base * altitude) / 2;
	
	printf("Area of Triangle is %f\n", area);
	
	return 0;
	
}
