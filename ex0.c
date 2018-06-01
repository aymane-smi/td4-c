#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(){
	int T[3][3], i, j, b, choix, det;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("T[%d][%d]=", i, j);
			scanf("%d", &T[i][j]);
		}
	}
	do{
		printf("1-afficher\n2-transposee\n3-changer le tableau\n4-determinant=>");
		scanf("%d", &choix);
		switch(choix){
			case 1:
			for(i=0;i<3;i++){
				for(j=0;j<3;j++)
					printf("T[%d][%d]=%d\n", i, j, T[i][j]);
			}
			break;
			case 2:
			for(i=0;i<3;i++){
				for(j=0;j<i+1;j++){
					b = T[j][i];
					T[j][i] = T[i][j];
					T[i][j] = b;
				}
			}
			break;
			case 3:
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					printf("T[%d][%d]=", i, j);
					scanf("%d", &T[i][j]);
				}
			}
			case 4:
			det = T[0][0]*(T[1][1]*T[2][2]-T[1][2]*T[2][1])-T[1][1]*(T[1][0]*T[2][2]-T[1][2]*T[2][1])+T[0][2]*(T[1][0]*T[2][1]-T[1][2]*T[2][0]);
			printf("le det est:%d\n", det);
		}
	}while(choix != 0);
}
