#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(){
	int T[3][3], i, j, choix;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("T[%d][%d]=", i, j);
			scanf("%d", &T[i][j]);
		}
	}
	do{
		printf("1-afficher\n2-transposee\n3-changer le tableau\n");
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
				for(j=0;j<3;j++)
					T[i][j] = T[j][i];
			}
			break;
			case 3:
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					printf("T[%d][%d]=", i, j);
					scanf("%d", &T[i][j]);
				}
			}
		}
	}while(choix != 0);
}
