#include<stdio.h>
#include<math.h>

main(){
	double l1,l2,l3;
	
	printf("Digite o valor do lado A: ");
	scanf("%lf",&l1);
	printf("Digite o valor do lado B: ");
	scanf("%lf",&l2);
	printf("Digite o valor do lado C: ");
	scanf("%lf",&l3);
	
	if (l1<=0||l2<=0||l3<=0||l1>l2+l3||l2>l1+l3||l3>l1+l2){
		printf("Essas medidas n�o condiz a condi��o de existencia do triangulo! ");
	    }
		 else if(l1==l2 && l1==l3){
		 	printf("Esse triangulo � equilatero!");
		    }
			 else if(l1!=l2 && l2!=l3 && l3!=l1){
		 	 	printf("Esse triagulo � escaleno");
		 	    }
				  else{
		 	 		printf("Esse triangulo � isosceles");
				}
			  
		 
	
}
