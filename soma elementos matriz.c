#include<stdio.h>
main(){
	int A[2][3];
	int soma = 0;
	int l, c;
	
	printf("Digite os valores para preencher a matriz, separando-os por enter: \n");	
	for(l=0; l<2; l++){
		for(c=0; c<3; c++){
			scanf("%d", &A[l][c]);
		soma += A[l][c];
		}
	}
	printf("A soma de todos os elemntos da matriz é de: %d ", soma);
	
}
