# include <stdio.h>

int main()
{
	float x,y;
	printf("Enter the x and y coordinates of the point\n");
	scanf("%f %f", &x, &y);
	
	if(x == 0 && y ==0)
	printf("Point lies on origin\n");
	
	else if(x == 0 && y !=0)
	printf("Point lies on y-axis\n");
	
	else if(x !=0 && y ==0)
	printf("Point lies on x-axis\n");
	
	else if (x > 0 && y > 0)
	printf("Point lies in the first quadrant\n");
	
	else if (x < 0 && y > 0)
	printf("Point lies in the second quadrant\n");
	
	
	else if (x < 0 && y < 0)
	printf("Point lies in the third quadrant\n");
	
	else if (x > 0 && y < 0)
	printf("Point lies in the fourth quadrant\n");
	
	return 0;
	
	
	
}
