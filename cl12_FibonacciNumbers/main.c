#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n;
	double f1=0, f2=1, f3;	
	
	printf("How many Fibonacci numbers do you need? : ");
	scanf("%d", &n);
	
	printf("##################################\n");
	printf("########### Get' em : ##########\n");
	
	printf("Member 1 : %g\n", f1);
	printf("Member 2 : %g\n", f2);	

	for (int i=3; i<=n; i++){
		f3 = f1 + f2;
		printf("Member %d : %g\n", i+1, f3);
		f1=f2;
		f2=f3;		
	}	
	
	return 0;
} 
