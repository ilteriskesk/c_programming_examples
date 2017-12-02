#include <stdio.h>

int main(){
	int i,j;
	int yildiz = 1;
	int satir;

	printf("Satir sayisini giriniz: ");
	scanf("%d",&satir);
	
	for(i = 0; i < satir; i++)
	{
		for(j = 0; j < yildiz; j++)
		{
			printf("*");
		}

		printf("\n");
		yildiz++;
	}
}
