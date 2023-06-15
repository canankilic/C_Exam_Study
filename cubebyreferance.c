#include <stdio.h>

void CubeByReferance(int *numPtr);

int main()
{
	int number1 = 6; 
	printf("The number is %d", number1);
	
	CubeByReferance(&number1);
	
	printf("\nThe cube of number is %d", number1);
	
	
	return 0;
}

void CubeByReferance(int *numPtr)
{
	
	*numPtr = *numPtr * *numPtr * *numPtr;
	
}
