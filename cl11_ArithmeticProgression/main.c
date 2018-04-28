#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int step;
	int base;
	
	printf("Input initial term : ");
	scanf("%d", &base);
	printf("Input common difference : ");
	scanf("%d", &step);
	
	printf("##################################\n");
	printf("###### Get progression: ##########\n");
	
	for (int i=1; i<=20; i++) printf("Member %d: %d\n", i, base+step*(i-1));	
	
	return 0;
} 
