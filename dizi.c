#include <stdio.h>

int main(){
	
	int a[] = {1,2,3,4,5};
	int i;
	int gecici;

	for(i = 0; i < 5; i++){
		printf("a[%d] = %d \t", i, a[i]);
	}

	printf("\n");

	for(i = 0; i < 2; i++){
		gecici = a[i];
		a[i] = a[4-i];
		a[4-i] = gecici;
	}

	for(i = 0; i < 5; i++){
		printf("a[%d] = %d \t", i, a[i]);
	}

	printf("\n");
}
