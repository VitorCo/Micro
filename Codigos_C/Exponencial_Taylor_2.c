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

unsigned long long int Fatorial(unsigned long long int n){
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

int Potencia(int x, int N){
	int i=1;
	int result;

	if(N==0)
	return 1;
	else{
		while(i<N){
		result = mult(x,x);
		i++;
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

double ExpTaylor(double x){
int N = 0;
double numerador;
double denominador;
double soma=0;
while(N<=20){
   //soma = soma + Divisao(Potencia(x,N),Fatorial(N))
   numerador = Potencia(x,N);
   denominador = Fatorial(N);
   soma = soma + Divisao(numerador,denominador);
}
return soma;
}

int main(){

unsigned long long int x;
double result;

printf("Digite um numero:\n");
scanf("%d",&x);
result = ExpTaylor(x);
printf("%d\n",result);
return 0;
}
