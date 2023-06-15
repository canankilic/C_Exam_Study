#include <stdio.h>
#include <string.h>
#define SIZE 50

int main()
{
	char str[SIZE];
	char *holdPtr = "NULL";
	char letter;
	int count = 0;
	printf("Enter the string:");
	fgets(str, SIZE, stdin);
	printf("Enter the letter you want to find: ");
	scanf("%c", &letter);
	getchar();
	
	
	holdPtr = strchr(str, letter);
	
	while(holdPtr != NULL)
	{
		count++;
		holdPtr = strchr(holdPtr + 1, letter);
	}
	

	
	printf("\nThe string is %s\nThe letter finded is %c", str, letter);
	printf("\nThe count of %c is %d", letter, count);
	
	
	
	
	
	
	return 0;
}
