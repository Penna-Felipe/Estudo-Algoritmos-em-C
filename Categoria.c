#include<stdio.h>


main(){
	int idade;
	
	printf("Digite sua idade: \n");
	scanf("%d", &idade);
	
	 if(idade>=5 && idade<=7){
	 	printf("Sua categoria � infantil A! ");
	 	}
	 	else
	 	 if(idade>=10&&idade<=10){
	 	 	printf("Sua categoria � infantil B! ");
		  }
		 else
		  if(idade>=11 && idade<=13){
		  	printf("Sua categoria � juvenil A!");
		  }
		  else
		   if(idade>=14 && idade<=7){
		   	printf("Sua categoria � juvenil B!");
		   } 
		   else {
		    printf("Voc� n�o pertence a nenhuma categoria!");
		   }
}
