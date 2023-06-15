#include <stdio.h>
#include <string.h>

int main()
{
	char text1[25];
	char text2[25];
	fgets(text1, 25, stdin);
	
	
	strcpy(text2, text1);
	printf("%s\n", text2);
	
	if(text1[strlen(text1) - 1] == '\n')
	{
		text1[strlen(text1) -1] = '\0';
	}
	
	
	strncpy(text2, text1, 3);
	text2[3] = '\0';
	printf("%s\n", text2);
	
	
	return 0;
}
