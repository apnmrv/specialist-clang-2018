#include <stdio.h>
#include <stdlib.h>

int main() {
	char firstName[10];
	char lastName[20];
	printf("Input your first name: ");
	scanf("%s",firstName);
	printf("Input your last name: ");
	scanf("%s",lastName);
		
	printf("Hello, %s %s!", firstName, lastName);
	
	return 0;
}
