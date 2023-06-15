#include <stdio.h>

int main()
{
	int num = 5, *numPtr;
	numPtr = &num;
	
	printf("Address of number is %p, %p", numPtr, &num);
	printf("\nNumber is %d, %d", *numPtr, num);

	printf("\nShowing that * and & are complements of each other n&*aPtr = %p n*&aPtr = %p", &*numPtr, *&numPtr);
	
	return 0;
}
