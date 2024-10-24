#include<stdio.h>
int existTrian(int l1, int l2, int l3){
	if (l1<=0||l2<=0||l3<=0||l1>l2+l3||l2>l1+l3||l3>l1+l2)
		printf("Essas medidas não condiz a condição de existencia do triangulo!");
		int n=0;
		return n;
}
int tipoTrian(int l1, int l2, int l3){
	if(l1==l2 && l1==l3){
		 	printf("Esse triangulo é equilatero!");
		    }
			 else if(l1!=l2 && l2!=l3 && l3!=l1){
		 	 	printf("Esse triagulo é escaleno");
		 	    }
				  else{
		 	 		printf("Esse triangulo é isosceles");
				}
}
int main(){
	int l1, l2, l3;
	int c = 0;
	printf("Digite o valor do lado A: ");
	scanf("%lf",&l1);
	printf("Digite o valor do lado B: ");
	scanf("%lf",&l2);
	printf("Digite o valor do lado C: ");
	scanf("%lf",&l3);
	existTrian(l1, l2, l3);
	if(p!=0){
		tipotrian(l1,l2,l3);
	}else{
		return 0;
	}
	return 0;
}
	

	
	
