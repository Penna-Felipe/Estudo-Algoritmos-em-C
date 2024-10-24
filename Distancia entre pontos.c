#include<math.h>
#include<stdio.h>
int main (void){
	float D,P,Q,D1,D2,DS;
	int X1,Y1,X2,Y2;
	printf("Coordenadas de P: ");
	scanf("%d,%d",&X1,&Y1);
	printf("Coodenadaas de Q: ");
	scanf("%d,%d",&X2,&Y2);
	P=X2-X1;
	Q=Y2-71;
	D1=pow(P,2);
	D2=pow(Q,2);
	DS=D1+D2;
	D=sqrt(DS);
	printf("Distância entre os pontos é: ""%f",D);
}
