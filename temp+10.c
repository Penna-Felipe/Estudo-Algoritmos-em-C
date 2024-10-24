#include<stdio.h>
#include<math.h>

int main(){
	int c,f;
	c=-100;
	
	while(c<=100){
		f=(c*(9/5))+32;
		printf("A temp %d, em fahrenheit é de: %d\n",c,f);
		c=c+10;
	}
}
