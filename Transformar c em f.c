#include<stdio.h>
#include<math.h>

main(){
	double c, f;
	
	printf("Digite a temperatura em Celsius: ");
	scanf("%lf",&c);
	
	f=(9/5*c)+32;
	
	printf("A temperatura em Farenheit é: %0.1lf",f);
	
	system('PAUSE');
}
