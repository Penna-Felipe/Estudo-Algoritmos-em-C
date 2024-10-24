#include<stdio.h>
#include<math.h>
main(){
	int A[4][2];
	int l, c;
	int media=0;
	int soma=0;
	
	printf("Digite os valores para preencher a matriz, separando-os por enter: \n");
	for(l=0; l<4; l++){
		for(c=0; c<2; c++){
			scanf("%d", &A[l][c]);
			soma += A[l][c];
		}
	media = soma/c;
	printf("A media da linha %d é de: %d\n", l, media);	
	media=0;
	soma=0;
	}
	
}
