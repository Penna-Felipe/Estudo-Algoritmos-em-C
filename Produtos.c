#include <stdio.h>
#include <math.h>

main(){
	double valor;
 	int cod;
	 	
	printf("Digite o valor do produto: ");
	scanf("%lf",&valor);
	
	printf("Digite o c�digo: ");
	scanf("%d",&cod);
	
	if (cod==1){
		printf("A proced�ncia do produto �: SUL, seu valor � de: %0.2lf.",valor);
	}else{
		if (cod==2){
		printf("A proced�ncia do produto �: NORTE, seu valor � de: %0.2lf.",valor);
		}else{
			if (cod==3){
				printf("A proced�ncia do produto �: LESTE, seu valor � de: %0.2lf.",valor);
			}else{
				if (cod==4){
					printf("A proced�ncia do produto �: OESTE, seu valor � de: %0.2lf.",valor);
				}else{
				if (cod==5 || cod==6 ){
					printf("A proced�ncia do produto �: NORDESTE, seu valor � de: %0.2lf.",valor);
				}else{
					if(cod==7 || cod==8 || cod==9){
					 printf("A proced�ncia do produto �: SUDESTE, seu valor � de: %0.2lf.",valor);	
					}else{
						if(cod>=10 && cod<=20){
							printf("A proced�ncia do produto �: CENTRO-OESTE, seu valor � de: %0.2lf.",valor);
						}else{
							if(cod>=25 && cod<=30){
								printf("A proced�ncia do produto �: NORDESTE, seu valor � de: %0.2lf.",valor);
							}else{
								printf("O produto �: importado, seu valor � de: %0.2lf.",valor);
							}
						}
					}
				}
				}
			}
		}
	
	}
}
