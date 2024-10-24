#include<stdio.h>

main(){
	float valorTotalCheque = 0, valorTotalDinheiro = 0, valorTotal = 0;
	float valorInformado;
	char codigoOperacao;
	do{
		printf("Digite o codigo da compra: C para cheque/ D para dinheiro/ S para sair \n ");
		scanf("%c", &codigoOperacao);
		valorInformado = 0;
				printf("Informe o valor: ");
				scanf("%f", &valorInformado); 
		    	//valorTotalCheque = valorTotalCheque + valorInformado;
		    	printf("%f", &valorInformado);
		/*switch(codigoOperacao){
			case 'C' : case 'c' :
				valorInformado = 0;
				printf("Informe o valor: ");
				scanf("%f", &valorInformado); 
		    	valorTotalCheque = valorTotalCheque + valorInformado;
		    	printf("%f", &valorInformado);
		    	break;
		    case 'D' : case 'd' : 
		    	valorInformado = 0;
				printf("Informe o valor: ");
		    	scanf("%f", &valorInformado); 
		    	valorTotalDinheiro = valorTotalDinheiro + valorInformado;
		    	break;
				}*/
		if(codigoOperacao == 'S'){
			codigoOperacao = 's';
		}
	}while(codigoOperacao != 's');
	printf("Total em dinheiro: %0.2f \n", &valorTotalDinheiro);
	printf("Total em cheque; %0.2f\n", &valorTotalCheque);
	valorTotal = valorTotalCheque + valorTotalDinheiro;
	printf("Valor total: %f", &valorTotal);
}
