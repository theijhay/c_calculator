#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b,j;

	printf("WELCOME TO MY CALCULATOR\n");

	printf(" 1:Addition\n 2:Subtraction\n 3:Multiplication\n 4:Division\n ");

	printf(" Enter one number above: ");
	scanf("%d",&j);

	printf(" Enter your number: ");
	scanf("%d",&a);

	printf(" Enter the second number: ");
	scanf("%d",&b);
	printf("Here is your result.\n");

	switch (j)
	{
	case 1:
	printf("%d + %d = %d", a,b,a+b);
	break;
	
	case 2:
	printf("%d - %d = %d", a,b,a-b);
	break;

	case 3:
	printf("%d X %d = %d", a,b,a*b);
	break;
	
	case 4:
	printf("%d / %d = %d", a,b,a/b);
	break;
	}
	return 0;
}
