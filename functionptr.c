#include <stdio.h>

void function1(int a);
void function2(int b);
void function3(int c);

int main()
{
	void(*f[3])(int) = {function1, function2, function3};
	printf("Enter a number between 0 and 2, 3 to end");
	int choice = 0;
	scanf("%d", &choice);
	
	while (choice >= 0 && choice <3)
	{
		(*f[choice])(choice);
		printf("Enter a number between 0 and 2, 3 to end");
		scanf("%d", &choice);
	
	}
	
	printf("Program execution completed.");	
}

void function1( int a)
{
	printf("First function");
}

void function2(int b)
{
	printf("Second function");
}

void function3( int c)
{
	printf("end function");
}








