#include<stdio.h>
#include<math.h>
int numero(int valor){
	int per = valor%2;
	if(per==0){
		printf("1");
	}else{
		printf("0");
	}
	return;
}
int main(){
	int n;
	printf("Digite um numero inteiro: ");
	scanf("%d", n);
	numero(n);
	return 0;
}
