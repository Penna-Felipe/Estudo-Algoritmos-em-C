#include<stdio.h>
main(){
	int x[5], y[5];
	int i;
	int o = 0;
	for(i=0;i<5;i++){
		printf("\nDigite um numero: ");
		scanf("%d", &x[i]);
		printf("\nO vetor x na posicao %d tem valor: %d\n", i, x[i]);
}
	for(i=4;i>-1;i--){
		y[o]=x[i];
		printf("\nO vetor y na posicao %d tem valor: %d\n", o, y[o]);
		o += 1;		
}
	
}
