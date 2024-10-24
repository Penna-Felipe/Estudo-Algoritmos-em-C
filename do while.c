#include <stdio.h>
 main(){
 	int n;
 	int numeroMenor = 0;
 	int numeroMaior = 0;
	 do{
 		
		printf("Digite um número: ");
 		scanf("%d",&n);
 		if(numeroMaior == 0){
 			numeroMaior = n;
 			numeroMenor = n;
		 } 
 		if(n > numeroMaior && n != 0){
 			numeroMaior = n;
		 }else if(n < numeroMenor && n != 0){
		 		numeroMenor = n;
			 }
		 }
 		 while(n != 0);
	 printf("O numero maior e: %d\n",numeroMaior);
	 printf("O numero menor e: %d",numeroMenor);
 }
