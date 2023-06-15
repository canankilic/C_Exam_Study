#include <stdio.h>
#include <string.h>
#define SIZE 50

int main()
{
	FILE *fPtr;
	char ch;
	char arr[SIZE];
	
	
	fPtr = fopen("deneme.txt", "w");
	
	if(fPtr == NULL)
	{
		printf("Error opening file.");
		return 1;
	}
	
	fprintf(fPtr, fgets(arr, SIZE, stdin));
	
	fclose(fPtr);
	
	fPtr = fopen("deneme.txt", "r");
	
	if(fPtr == NULL)
	{
		printf("Error opening file.");
	}
	
	
	while((ch = fgetc(fPtr)) != EOF)
	{
		printf("%c", ch);
	}


	fclose(fPtr);
	
	return 0;
}
