#include<stdio.h>
int main()
{
	int c, l;
	float nota[4][3];
		nota[0][0]=5;
	nota[0][1]=7;
	nota[0][2]=4;
	nota[1][0]=0;
	nota[1][1]=3;
	nota[1][2]=10;
	nota[2][0]=8.5;
	nota[2][1]=5.2;
	nota[2][2]=0;
	nota[3][0]=9;
	nota[3][1]=4;
	nota[3][2]=9;
	nota[4][0]=6.7;
	nota[4][1]=3.5;
	nota[4][2]=9.5;
	for (l = 0; l < 5; l++)
	{
		printf("\n\naluno: %d",l+1);
		printf("\nnota1: %.1f",nota[l][0]);
		printf("\nnota2: %.1f",nota[l][1]);
		printf("\nnota3: %.1f",nota[l][2]);
		printf("\nmedia: %.1f",nota[l][3]);
	}
}
