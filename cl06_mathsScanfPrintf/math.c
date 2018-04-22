#include <stdio.h>
#include <stdlib.h>

int main()
{	
	float val1, val2, result;
	
	printf("\We're going to do some math, pal ...'");
	printf("\n\nEnter a value, please : ");
	scanf("%f", &val1);
	printf("\nEnter another : ");
	scanf("%f", &val2);
	
	
	
	printf("\nThe sum is : %f", result = (val1+val2));
	printf("\nThat is %f + %f = %f", val1, val2, result);
	printf("\nThe difference is : %f", result = (val1-val2));
	printf("\nThat is %f - %f = %f", val1, val2, result);
	printf("\nThe product is : %f", result = (val1*val2));
	printf("\nThat is %f * %f = %f", val1, val2, result);
	printf("\nThe quotient is : %f", result = (val1/val2));
	printf("\nThat is %f / %f = %f", val1, val2, result);
	
	return 0;
}
