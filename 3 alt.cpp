#include<stdio.h>
int main()
{
	int c, l;
	float nota[4][3], menor[4][2];
	
	for(l = 0; l < 5; l++)
	{
		if(nota[l][0] < nota[l][1] && nota[l][0] < nota[l][2]){
			menor[l][0] = nota[l][1];
			menor[l][1] = nota[l][2];
		}else{
			if(nota[l][1] < nota[l][2]){
				menor[l][0] = nota[l][0];
				menor[l][1] = nota[l][1];
			}else{
				menor[l][0] = nota[l][1];
				menor[l][1] = nota[l][2];
			}
		}
		
		nota[l][3] = (menor[l][0] + menor[l][1]) / 2;
		printf("%.1f\n", nota[l][3]);
	}
}
