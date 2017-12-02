#include <stdio.h>

int main()
{
	int dizi1[2][2] = {{1,1},{2,2}};
	int dizi2[2][2] = {{3,3},{4,4}};
	int dizi3[2][2];
	int i,j,k,l;

	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			dizi3[i][j] = dizi1[i][j] + dizi2[i][j];
			printf("%5d",dizi3[i][j]);
		}
		printf("\n");
	}

}
