#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 256

int main(){
	char name[MAX_LENGTH];
	int i;
	
	printf("input your name: ");
	for(i=0;i<MAX_LENGTH-1;i++){
		name[i]=getchar();
		if(name[i]=='\n') break;	
	}
	name[i]='\0';
	
	printf ("Hello, %s!\n", name);
	
	return 0;	
}

