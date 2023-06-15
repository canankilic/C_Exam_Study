#include <stdio.h>

void reverse(const char * const fPtr);

int main()
{
	char text[50];
	printf("Enter a line and we reverese it: ");
	fgets(text, 50, stdin);
	
	
	reverse(text);
	puts("");
	
	
	
	return 0;
}

void reverse(const char * const fPtr)
{
	if('\0' == fPtr[0])
	{
		return;
	}
	
	else
	{
		reverse(&fPtr[1]);
		putchar(fPtr[0]);
	}
	
	
}
