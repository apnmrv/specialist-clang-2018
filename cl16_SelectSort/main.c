#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 100

int main(){
	// Select sort
	
	float arr[MAX_SIZE], x, min;
	int i, j, k, n;
	
	srand (time(NULL));
	printf("Input array's capacity :  ");
	scanf("%d", &n);
	
	
	// Data acquisition
	
	printf("\nRandom data : \n");
	for (i=0; i<n; i++) {
		arr[i] = rand()%100/10.;
		printf("%.1f ", arr[i]);
	}
	
	// Sorting
	for (i=0; i<n-1; i++){
		min = arr[i]; 
		k=i;
		for (j=i+1; j<n; j++) {
			if (arr[j] < min) {
				min = arr[j];
				k = j;
			}					
		}
		arr[k] = arr[i];
		arr[i] = min;
	}
	
	// Result output
	
	printf("\nSorted data : \n");
	for (i=0; i<n; i++) {
		printf("%.1f ", arr[i]);
	}
	
	return 0;
}
