#include <stdio.h>

int main(){

	int i,j,satir;
	int yildiz, bosluk;

	printf("Satir sayisini giriniz: ");
	scanf("%d",&satir);

	yildiz = 1;
	bosluk = satir - 1;

	for(i = 0; i < satir; i++)
	{
		for(j = 0; j < bosluk; j++)
		{
			printf(" ");
		}
		for(j = 0; j < yildiz; j++)
		{
			printf("*");
		}

		printf("\n");
		bosluk--;
		yildiz++;
	}
}
