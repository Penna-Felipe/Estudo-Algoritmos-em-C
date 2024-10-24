#include<stdio.h>
#include<math.h>

main(){
	float soma;
	float cont, nUsuario;
	float h = 1;
	printf("Digite o N: ");
	scanf("%f", &nUsuario);
	for(cont=1; cont <= nUsuario; cont++){
	soma = h + 1/cont;
	h = soma;
   }
   printf("%f", h);
}
