#include<stdio.h>
#include<math.h>

main(){
	double c, f;
	int e;
	
	printf(" Aperte 1 para transformar de Celsius para Farenheit! \n");
	printf(" Aperte 2 para transformar de Farenheit para Celsius! \n ");
	scanf("%d",&e);
	 if(e==1){
	     printf("Digite a temperatura em Celsius: \n");
		 scanf("%lf",&c);
	     f=(9/5*c)+32;
		
		 printf("A temperatura em Farenheit é: %0.1lf",f);
		 }
		 else
	       if(e==2){
		
		     printf("Digite a teperatura em farenheit: \n");
		     scanf("%lf",&f);
		     c=(f-32)/1.8;
		
		     printf("A temperatura em celsius é: %0.1lf",c);
		 }
			
}
