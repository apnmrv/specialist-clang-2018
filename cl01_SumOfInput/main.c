#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned short size=1;
    float num, sum=0;
    int i;
	
    // Getting the number of arguments
    printf("Input the number of arguments : ");
    scanf("%hu", &size);
	
    // Computations
    for (i=0; i<size; i++) {
        printf("\nEnter a number : ");
        scanf("%f", &num);
        sum = sum+num;
    }
	
    // Result output
    printf("\nThe sum of the numbers is %f\n", sum);

    return 0;
}
