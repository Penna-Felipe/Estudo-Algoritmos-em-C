#include<stdio.h>
main(){
	int A[5][7];
	int l, c;
	int nmaior=0;
	int lmaior, cmaior;
	
	printf("Digite os valores para preencher a matriz, separando-os por enter: \n");
	for(l=0; l<5 ;l++){
		for(c=0; c<7 ;c++){
			scanf("%d", &A[l][c]);
			if(A[l][c]>nmaior){
				nmaior=A[l][c];
				lmaior=l;
				cmaior=c;
			}
		}
		
	}
	printf("O numero maior e: %d e sua posicao e [%d][%d]", nmaior, lmaior, cmaior);
system("pause");	
}
