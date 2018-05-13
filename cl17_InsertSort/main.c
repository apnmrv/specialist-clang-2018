#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 100

int main(){
	// Insert sort
	
	float arr[MAX_SIZE], x, max;
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
		max = arr[i];
		for (j=i+1; j>0 && arr[j]<max; j--) {
			if (arr[j]<arr[j-1]) {
				x = arr[j];
				arr[j] = arr [j-1];
				arr[j-1] = x;
			}
		}
	}
	
	// Result output
	
	printf("\nSorted data : \n");
	for (i=0; i<n; i++) {
		printf("%.1f ", arr[i]);
	}
	
	return 0;
}
