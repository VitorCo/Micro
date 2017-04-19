#include <stdio.h>
#include <stdlib.h>

float Raiz_Quadrada(float S){
	int n = 0;
	float x = S/2;

	while(n<10){
	x = (x + S/x)/2;
	n++;
	}
	return x;
	}

int main(){
float s;
float result;
printf("Digite um numero:\n");
scanf("%f", &s);
printf("%f\n",Raiz_Quadrada(s));

return 0;
}
