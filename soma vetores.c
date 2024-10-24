#include<stdio.h>

main(){
	int v1[5];
	int v2[5];
	int i, soma;
	for(i=0; i<5; i++){
		printf("Digite os numeros v1: ");
		scanf("%d", &v1[i]);
		printf("Digite os numeros v2: ");
		scanf("%d", &v2[i]);
		soma = v1[i] + v2[i];
		printf("\n%d\n", soma);
		
  }
  	
  	
}
