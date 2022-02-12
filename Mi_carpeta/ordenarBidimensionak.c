#include<stdio.h>

main(){
	int fila=2,col=5;
	int matriz[2][5]={{1,7,2,9,3},
							{8,2,5,7,3}};
		
	int i,j,k,aux;
	for(i=0;i<fila;i++){
		for(j=0;j<col;j++){
			printf("%i ", matriz[i][j]);
		}
		printf("\n");
	}
				
	
	for(i=0;i<fila;i++){
		for(j=0;j<col;j++){
			for(k=0;k<col-1;k++){
				if(matriz[i][k]>matriz[i][k+1]){
					aux=matriz[i][k];
					matriz[i][k]=matriz[i][k+1];
					matriz[i][k+1]=aux;
				}
			}
		}
		
	}
	for(i=0;i<fila;i++){
		for(j=0;j<col;j++){
			printf("%i ", matriz[i][j]);
		}
		printf("\n");
	}
	
	system("PAUSE");
}

