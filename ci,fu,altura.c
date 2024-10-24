#include<stdio.h>
#include<math.h>

int main(){
 	double f,c;
 	f=1.50;
 	c=1.10;
	int a=1;
 	
 	while(c<f){
 		printf("A altura de Fulano é de: %0.2lf e a de Ciclano é de: %0.2lf analise ano %d\n",f,c,a);
 		f=f+0.02;
 		c=c+0.03;
 		a=a+1;
	 }
	 printf("A altura de Fulano é de: %0.2lf e a de Ciclano é de: %0.2lf foram necessarios %d para Ciclano ser maior que Fulano",f,c,a);
}
