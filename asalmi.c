/*
 * Program girilen sayının asal olup olmadığının bilgisini bize döndürecek.
 */

#include <stdio.h>

int main(){
	int sayi;
	int sayac;

	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);

	for (sayac = 2; (sayac/2) <= sayi; sayac++){
		if (sayi % sayac == 0){
			printf("Girilen sayi ASAL DEGILDIR \n");
			break;
		}
		
		else{
			printf("Girilen sayi ASALDIR \n");
			break;
		}
	}

	return 0;
}
