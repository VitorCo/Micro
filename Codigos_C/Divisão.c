#include <stdio.h>
#include <stdlib.h>

int Divisao(int a, int b){
int i=0;
while(a>=b){
	a = a - b;
	i++;
	}
return i;
}

int main(){
int x;
int N;
int result;

printf("Digite dois numeros:\n");
scanf("%d",&x);
scanf("%d",&N);
result = Divisao(x,N);
printf("%d\n",result);
return 0;
}
