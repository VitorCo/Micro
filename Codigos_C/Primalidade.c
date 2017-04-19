#include <stdio.h>
#include <stdlib.h>

int Primalidade(unsigned int a){
int i = 1;
int cont = 0;
int resto;
while(i<=a){
    resto = Resto(a,i);
    if(resto==0){;
    cont++;}
    i++;
    }
  if(cont == 2)
    return 1;
  else
    return 0;
}
int Resto(int a, int b){
while(a>=b){
    a = a - b;
    }
return a;
}

int main(){
unsigned int x;
int result;

printf("Digite um numero:\n");
scanf("%d",&x);
result = Primalidade(x);
printf("%d\n",result);
return 0;
}
