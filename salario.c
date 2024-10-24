#include <stdio.h>
#include <math.h>

main(){
	double sal;
	double per;
	int cod;
	double tot;
	
	printf("Digite o valor do salario: ");
	scanf("%lf",&sal);
	
	printf("Digite o código correspondente ao cargo: \n 1 - ESCRITUARIO \n 2 - SECRETARIO \n 3 - CAIXA \n 4 - GERENTE \n 5 - DIRETOR \n ");
	scanf("%d",&cod);
		switch(cod){
			case 1 : per=0.5; 
			tot=(sal*per)+sal;
			printf("O cargo do empregado é ESCRITUARIO e o valor de seu salario é de: %0.2lf", tot);
			break;
			case 2 : per=0.35;
			tot=(sal*per)+sal; 
			printf("O cargo do empregado é SECRETARIO e o valor de seu salario é de: %0.2lf", tot);
			break;
			case 3 : per=0.20;
			tot=(sal*per)+sal;
			printf("O cargo do empregado é CAIXA e o valor do seu salario é de: %0.2lf", tot);
			break;
			case 4 : per=0.10;
			tot=(sal*per)+sal;
			printf("O cargo do empregado é GERENTE e o seu salario é de: %0.2lf", tot);
			break;
			case 5 : printf("O cargo do empregado é DIRETOR e o seu salario é de: %0.2lf,", sal);
			break;
			default : printf("O codigo %d esta incorreto.", cod);
			
		}
}
	
