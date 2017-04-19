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



int main(){
int x;
int N;
int result;

printf("Digite dois numeros:\n");
scanf("%d",&x);
scanf("%d",&N);
result = Potencia(x,N);
printf("%d\n",result);
return 0;
}
