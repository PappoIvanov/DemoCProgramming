#include <stdio.h>

int main()
{
	float floatingNumber;
	float f;
	
	printf("Enter an floating point number: ");
	scanf("%f", &floatingNumber);
	
	printf("Enter a floating point number: ");
	scanf("%f", &f);
	
	printf("%f ", floatingNumber);
	printf("%f", f);
	
	return 0;
}