# include <stdio.h>
int main()
{	
	char alphabet;
	printf("Enter an alphabet\n");
	scanf("%c", &alphabet);
	
	switch(alphabet)
	{
		case 'a': 
		printf("Vowel\n");
		break;
		
		case 'e': 
		printf("Vowel\n");
		break;
		
		case 'i': 
		printf("Vowel\n");
		break;
		
		case 'o': 
		printf("Vowel\n");
		break;
		
		case 'u': 
		printf("Vowel\n");
		break;
		
		default:
		printf("Consonant\n");	
	}
	
	
}
