#include<math.h>
main(){
	float i, j, exec;
	float resultado = 0;
	for(i = 0; i <= 7; i++){
		for(j = 0; j <= 7; j++){
			resultado += ((2 * j + 1) * i )/ (2 * j + 5);
		}
		}
   exec = (i) * (j);
   printf("\n%0.2f\n", resultado);
   printf("\nA formula foi executada: %0.2f.\n", exec);
}

