#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n;
	
	printf("Input a number : ");
	scanf("%d", &n);

	if (n>0) printf ("Number %d is positive\n", n);
	else if (n<0) printf ("Number %d is negative\n", n);
	else printf("Number %d is zero\n", n);

	return 0;
} 
