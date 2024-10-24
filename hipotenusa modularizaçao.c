#include<stdio.h>
#include<math.h>
double hip (double a, double b){
	double resp;
	resp= pow(a,2) + pow(b,2);
	return resp;
}
int main(){
	double l1, l2 , h;
	
	printf("Digite os catetos de triangulo separado por enter: ");
	scanf("%lf %lf", &l1, &l2);
	h=sqrt(hip(l1,l2));
	printf("O valor da hipotenusa deste triangulo e de: %0.2lf", h);
}
