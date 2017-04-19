#include <stdio.h>
#include <stdlib.h>

int Mult(int a, int b){
    int mult=0;
    if(b==0)
    return 0;
    else{
        while(b>0){
        mult = mult + a;
        b--;
        }
    }
  return mult;
}

int Resto(int a, int b){
while(a>=b){
    a = a - b;
    }
return a;
}

unsigned long long DuploFatorial(unsigned long long n){

    if(n==0){
        return 1;
    }
int i=n-2;
int resto = Resto(n,2);

    if(resto == 0){
        while(i>1){
            n = Mult(n,i);
            i = i - 2;}
    }else{
        while(i>0){
            n = Mult(n,i);
            i = i - 2;
        }
    }
 return n;
}

int main(){
unsigned long long x;
unsigned long long result;

printf("Digite um numero:\n");
scanf("%lld",&x);
result = DuploFatorial(x);
printf("%lld\n",result);
return 0;
}
