#include<math.h>
#include<stdio.h>

main(){	
int n, resto;
for(n = 1; n <= 100; n++){
	resto = n % 7;
		if(resto == 0) {
		printf("\nO numero %d e multiplo.\n", n);
			}else{
			printf("\nO numero %d nao e multiplo.\n", n);
	}
  }
}
