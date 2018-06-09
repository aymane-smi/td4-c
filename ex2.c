#include<stdio.h>
//matrice produit
void main(){
	int a[4][3], b[3][2], c[4][2], i, j, k;
	//matrice a
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf("a[%d][%d]=", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	//matrice b
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("b[%d][%d]=", i, j);
			scanf("%d", &b[i][j]);
		}
	}
	//matrice c
	for(i=0;i<4;i++){
		for(j=0;j<2;j++){
			c[i][j] = 0;
			for(k=0;k<3;i++)
				c[i][j] += a[i][k]*b[k][j];
		}
	}
	//affichage matrice produit
	for(i=0;i<4;i++){
		for(j=0;j<2;j++){
			printf("c[%d][%d]=%d\n", i, j, c[i][j]);
		}
	}
}
