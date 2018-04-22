#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned short size=1;
    float num, max, min;
    int i;
	
   // Getting the number of arguments
    printf("Enter the number of arguments : ");
    scanf("%hu", &size);
    
    // Getting the first argument
    // Initialising min and max values with it 
    printf("\nEnter the first one : ");
    scanf("%f", &num);
    max=min=num;

    for (i=1; i<size; i++) {
        printf("\nEnter the next one : ");
        scanf("%f", &num);
        if (num>max) max=num;
        if (num<min) min=num;
    }
	
   // Result output
    printf("\nThe minimum value is %f\n", min);
    printf("\nThe maximum value is %f\n", max);

    return 0;
}
