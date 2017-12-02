#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int zarAtma(void);

int main(){
	
	int oyunDurumu, toplam, oyuncuPuani, cevap;
	
	srand(time(NULL));
	toplam = zarAtma();

	switch(toplam){
		case 7: case 11:
			oyunDurumu = 1;
			break;
		case 2: case 3: case 12:
			oyunDurumu = 2;
			break;
		default:
			oyunDurumu = 0;
			oyuncuPuani = toplam;
			printf("Oyuncunun kazanacagi zar: %d\n", oyuncuPuani);
			break;
	}

	while(oyunDurumu == 0){
		toplam = zarAtma();

		if(toplam == oyuncuPuani)
			oyunDurumu = 1;
		else
			if(toplam == 7)
				oyunDurumu = 2;
	}

	if(oyunDurumu == 1)
		printf("Oyuncu kazanir \n");
	else
		printf("Oyuncu kaybeder\n");

	return 0;
}

int zarAtma(void){
	int zar1, zar2, toplamZar;

	zar1 = 1 + (rand() % 6);
	zar2 = 1 + (rand() % 6);
	toplamZar = zar1 + zar2;
	printf("Oyuncu %d + %d = %d attı \n", zar1, zar2, toplamZar);
	
	return toplamZar;
}
