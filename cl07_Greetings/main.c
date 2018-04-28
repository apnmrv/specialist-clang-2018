#include <stdio.h>
#include <stdlib.h>

int main() {
	char firstName[256];
	char lastName[256];
	printf("Input your first name: ");
	scanf("%s",firstName);
	printf("Input your last name: ");
	scanf("%s",lastName);

	printf("Hello, %s %s!\n", firstName, lastName);

	return 0;
}
