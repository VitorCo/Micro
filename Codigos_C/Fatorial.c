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

void main(){
unsigned long long x;
unsigned long long result;

printf("Digite um numero:\n");
scanf("%lld",&x);
result = Fatorial(x);
printf("%lld\n",result);
//return 0;
}
