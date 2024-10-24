#include<stdio.h>
#include<math.h>
int delta(int a, int b, int c){
	int resp = pow(b,2)-4*(a*c);
	return resp;
}
int calc (int d, int b, int a){
    int resp = -b + sqrt(d)/2*a;
	return resp;
}
int calc2 (int d, int b, int a){
	int	resp = -b - (d)/2*a;
	return resp;
}
int main(){
	int a, b, c , d, x1, x2;
	printf("Digite os valores de a, b e c da equacao separador por enter: ");
	scanf("%d %d %d", &a, &b, &c);
	d = delta(a, b, c);
	printf("O valor de delta e: %d", d);
	x1 = calc(d, b, a);
	printf("O valor de X1 e de: %d", x1);
	x2 = calc2(d, b, a);
	printf("O valor de X2 e de: %d", x2);
	
}
