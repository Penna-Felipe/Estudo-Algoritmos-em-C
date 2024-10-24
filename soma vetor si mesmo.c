#include<stdio.h>
main(){
	int x[5];
	int i;
	int soma=0;
	for(i=0;i<5;i++){
		printf("Digite um numero: ");
		scanf("%d", &x[i]);
		soma += x[i];
	}
	printf("A somatatoria dos elementos do vetor e: %d", soma);
}
