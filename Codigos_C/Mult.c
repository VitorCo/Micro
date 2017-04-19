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

int main(){
int x;
int N;
int result;

printf("Digite dois numeros:\n");
scanf("%d",&x);
scanf("%d",&N);
result = Mult(x,N);
printf("%d\n",result);
return 0;
}
