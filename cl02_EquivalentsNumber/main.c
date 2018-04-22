#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned short size=1, result=0;
    float num, cValue;
    int i;

    // Getting the number of arguments
    printf("Enter the number of arguments : ");
    scanf("%hu", &size);

    // Getting the control value
    printf("Enter the Control Value : ");
    scanf("%f", &cValue);

    // Computations 
    for (i=0; i<size; i++) {
        printf("\nEnter a number : ");
        scanf("%f", &num);
	    if (num == cValue) result++;
    }

    printf("\nYou entered value %f %d times\n", cValue, result);

    return 0;
}

