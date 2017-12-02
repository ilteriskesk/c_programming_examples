#include <stdio.h>

int main(){
	int dizi[] = {1,2,3,4};
	int *p;
	
	p = dizi;

	printf("Dizi Gosterimi ------> %d \n", dizi[2]);
	printf("Pointer Gösterimi ---> %d \n", *(p+2));

}
