#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int dayNumber;
	
	printf("Input day number : ");
	scanf("%d", &dayNumber);
	
	switch(dayNumber){
		case 1 : printf("Sunday\n");
			break;
		case 2 : printf("Monday\n");
			break;
		case 3 : printf("Tuesday\n");
			break;
		case 4 : printf("Wednesday\n");
			break;
		case 5 : printf("Thursday\n");
			break;
		case 6 : printf("Saturday\n");
			break;
		
		default: printf("Wrong number!\n");
	}

	return 0;
} 
