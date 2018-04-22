#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned short size, result=1;
    float prev, next;
    int i;
	
    // Getting the number of arguments
    printf("Enter the number of arguments : ");
    scanf("%hu", &size);
    
    // Getting the first argument
    // Initialising min and max values with it 
    printf("\nEnter the first one : ");
    scanf("%f", &prev);
	
    for (i=1; i<size; i++) {
        printf("\nEnter the next one : ");
        scanf("%f", &next);
        if (next>prev) {
        	result++; 
        	prev = next;	
        }        
    }
	
    // Result output
    printf("\nThe number of different values is %hu\n", result);

    return 0;
}
