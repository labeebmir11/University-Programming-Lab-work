# include <stdio.h>

int add(int,int );
void sub();
void mul(); 
void div();
int a,b,op;
int main()
{
	
	
	printf("Enter two numbers\n");
	scanf("%d %d", &a, &b);
//	printf("%d %d", a, b);

    printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division\n");
    scanf("%d", &op);
    
    switch(op)
    {
    	case 1:
    	add(a,b);
		break;	
		
		case 2:
    	sub();
		break;
		
		case 3:
    	mul();
		break;
		
		case 4:
    	div();
		break;
		
		default:
		printf("Invalid input\n");	
    }
    
}
	int add(int a ,int b )
	{
		printf("%d", a + b);
		return a + b;
	}
	
	void sub()
	{
		printf("%d", a - b);
	}
	
	void mul()
	{
		printf("%d", a * b);
	}
	
	void div()
	{
		printf("%d", a / b);
	}
