#include <stdio.h>
#define SIZE 30
int main()
{

	char name[SIZE]; 
	char *namePtr = name;
	
	printf("Enter your name: ");
	scanf("%15s", name);
	
	printf("Name is %s", name);
	
	
	return 0;
}
