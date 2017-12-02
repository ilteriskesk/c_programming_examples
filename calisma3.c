#include <stdio.h>

int main(){

	int ogrNotlar[3][3];
	int puan;
	int toplam = 0;
	int i, j;
	int sayac = 1;

	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d. ogrencinin %d. notunu giriniz: ", sayac, ogrNotlar[i][j]);
			scanf("%d",&puan);
			toplam += puan;
			sayac++;
		}
	}

	printf("Toplam= %d \n",toplam);
}
