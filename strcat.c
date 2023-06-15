#include <stdio.h>
#include <string.h>

int main()
{
	char str1[50] ={"I like it. "};
	char str2[] = {"Thanks."};
	
	strcat(str1, str2);
	
	printf("%s", str1);
	
	
	return 0;
}
