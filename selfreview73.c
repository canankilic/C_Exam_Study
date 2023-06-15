#include <stdio.h>
#define SIZE 10

int main()
{
	float arr[SIZE] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
	float *nPtr;
	
	
	int i;
	printf("\nArray numbers of elements are :\n");
	for(i = 0; i <SIZE; i++)
	{
		printf("%.1f", arr[i]);
	}
	
	nPtr = arr;
	//nPtr = &arr[0];
	
	printf("Numbers of array using pointer notation with nPtr?: \n");
	for(i = 0; i < SIZE; i++)
	{
		printf("%.1f", *(nPtr + i));
	}
	
	
	printf("\nNumbers of array using pointer notation with array name?: ");
	for(i = 0; i < SIZE; i++)
	{
		printf("%.1f", *(arr + i));
	}
	
	
	printf("\nPrint numbers’ elements by subscripting pointer nPtr: ");
	for(i = 0; i < SIZE; i++)
	{
		printf("%.1f", nPtr[i]);
	}
	
	
	printf("\nNumero fouro arr %d", arr[4]);
	printf("\nNumero fouro nPtr %d", nPtr[4]);
	printf("\nNumero fouro arr name as ptr %d", *(arr + 4));
	printf("\nNumero fouro idk some other thing %d", *(nPtr + 4));
	
	// 1002500 memo
	
	printf("\nFirst one is %p numore 4 is %p", nPtr, (nPtr + 8));
	return 0;
}
