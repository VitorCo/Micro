#include <stdio.h>
#include <stdlib.h>

int Mult(int a, int b){
    int result=0;
    if(b==0)
    return 0;
    else{
        while(b>0){
        result = result + a;
        b--;
        }
    }
  return result;
}

int Divisao(int a, int b){
int i=0;
while(a>=b){
	a = a - b;
	i++;
	}
return i;
}
int Potencia(int x, int N){
	int i=1;
	int result = x;

	if(N==0)
	return 1;
	else if(N==1)
    return x;
	else{
		while(i<N){
		result = Mult(result,x);
		i++;
		}
	 }
	 return result;
	}


unsigned long long Fatorial(unsigned long long n){
int i;
i=(n-1);
    if(n==0){
        return 1;
    }else{
        while(i>0){
        n = Mult(n,i);
        i--;
        }
    }
 return n;
}

double ExpTaylor(double x){

int N = 0;
double soma=0;
double numerador;
float denominador;
double div;
while(N<=20){
   //soma = soma + (Potencia(x,N)/Fatorial(N));
   numerador = Potencia(x,N);
   printf("%lf\n", numerador);
   denominador = Fatorial(N);
   printf("%f\n", denominador);
   soma = soma + (numerador/denominador);
   //div = Divisao(numerador,denominador);
   //soma = soma + div;
   N++;
}
return soma;
}

int main(){
double x;
double result;

printf("Digite um numero:\n");
scanf("%lf",&x);
result = ExpTaylor(x);
printf("%lf\n",result);
return 0;
}
