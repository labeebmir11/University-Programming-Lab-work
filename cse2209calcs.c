# include <stdio.h>
int main()
{	
	int a,b,op;
	printf("Enter two numbers\n");
	scanf("%d %d", &a, &b);
//	printf("%d %d", a, b);

    printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division\n");
    scanf("%d", &op);
    
    switch(op)
    {
    	case 1:
    	printf("%d", a + b);
		break;	
		
		case 2:
    	printf("%d", a - b);
		break;
		
		case 3:
    	printf("%d", a * b);
		break;
		
		case 4:
    	printf("%d", a / b);
		break;
		
		default:
		printf("Invalid input\n");	
    }
	
}
