#include <stdio.h>
#include <math.h>

main(){
	double valor;
 	int cod;
	 	
	printf("Digite o valor do produto: ");
	scanf("%lf",&valor);
	
	printf("Digite o código: ");
	scanf("%d",&cod);
	
	if (cod==1){
		printf("A procedência do produto é: SUL, seu valor é de: %0.2lf.",valor);
	}else{
		if (cod==2){
		printf("A procedência do produto é: NORTE, seu valor é de: %0.2lf.",valor);
		}else{
			if (cod==3){
				printf("A procedência do produto é: LESTE, seu valor é de: %0.2lf.",valor);
			}else{
				if (cod==4){
					printf("A procedência do produto é: OESTE, seu valor é de: %0.2lf.",valor);
				}else{
				if (cod==5 || cod==6 ){
					printf("A procedência do produto é: NORDESTE, seu valor é de: %0.2lf.",valor);
				}else{
					if(cod==7 || cod==8 || cod==9){
					 printf("A procedência do produto é: SUDESTE, seu valor é de: %0.2lf.",valor);	
					}else{
						if(cod>=10 && cod<=20){
							printf("A procedência do produto é: CENTRO-OESTE, seu valor é de: %0.2lf.",valor);
						}else{
							if(cod>=25 && cod<=30){
								printf("A procedência do produto é: NORDESTE, seu valor é de: %0.2lf.",valor);
							}else{
								printf("O produto é: importado, seu valor é de: %0.2lf.",valor);
							}
						}
					}
				}
				}
			}
		}
	
	}
}
