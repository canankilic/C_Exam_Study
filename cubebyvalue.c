#include <stdio.h>

int CubeByValue(int n); // function prototype

int main()
{
	int number = 5;
	printf("Number is %d", number);
	
	
	printf("\nCube of the value is %d", CubeByValue(number)); //function call
	
	return 0;
}

int CubeByValue(int n)
{
	
	return n * n * n;
	
}
