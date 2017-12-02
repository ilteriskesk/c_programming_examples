#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int sayi;

	printf("Bu ay girilecek araba sayisini giriniz: ");
	scanf("%d",&sayi);

	int *p = (int *) malloc (sizeof(int)*sayi);
	
	printf("%d degerinde bos hafiza alani ayrildi.\n", sayi);
}
