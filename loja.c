#include<stdio.h>


main(){
	float valorTotalCheque, valorTotalDinheiro, valorTotal;
	float valorInformado;
	char codigoOperacao;
	do{
		printf("Digite o codigo da compra: C para cheque/ D para dinheiro/ S para sair \n ");
		scanf("%c", &codigoOperacao);
		switch(codigoOperacao){
			case ('C') : case ('c') : printf("Informe o valor: "); scanf("%f", &valorInformado); valorTotalCheque = valorInformado + valorTotalCheque; break;
		    case ('D') : case ('d') : printf("Informe o valor: "); scanf("%f", &valorInformado); valorTotalDinheiro = valorInformado + valorTotalDinheiro; break;
		    default : break;
				}
		if(codigoOperacao == 'S'){
			codigoOperacao = 's';
		}
	}while(codigoOperacao != 's');
	printf("Total em dinheiro: R$%0.2f \n", valorTotalDinheiro);
	printf("Total em cheque: R$%0.2f\n", valorTotalCheque);
	valorTotal = valorTotalCheque + valorTotalDinheiro;
	printf("Valor total: R$%0.2f", valorTotal);
}
