#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	double  n1, n2, amean, gmean, hmean, qmean;

	printf("Enter a number : ");
	scanf("%lg", &n1);
	printf("Enter another : ");
	scanf("%lg", &n2);
	
	
	printf("Arithmetic mean of %lg and %lg is %lg\n", n1, n2, amean = (n1+n2)/2);
	printf("Geometric mean of %lg and %lg is %lg\n", n1, n2, gmean = sqrt(n1*n2));
	printf("Harmonic mean of %lg and %lg is %lg\n", n1, n2, hmean = 1/((1/n1+1/n2)/2));
	printf("Quadratic mean of %lg and %lg is %lg\n", n1, n2, qmean = sqrt((n1*n1+n2*n2)/2));

	
	return 0;
} 
