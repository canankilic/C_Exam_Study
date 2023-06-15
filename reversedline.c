#include <stdio.h>

void reverse(char *sPtr);

int main()
{
	char linearr[50];
	
	printf("Enter a text of line to reverse:");
	
	fgets(linearr, 50, stdin);
	reverse(linearr);
	
	
	
	return 0;
}

void reverse(char *sPtr)
{
	if(sPtr[0] == '\0')
	{
		return;
	}

	else
	{
		reverse(&sPtr[1]);
		putchar( sPtr[0]);
			
	}
	
}

