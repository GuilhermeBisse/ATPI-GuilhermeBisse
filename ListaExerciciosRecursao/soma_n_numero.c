#include <stdio.h>

int somaNumeros(int n){
    if(n==0){
        return 0;
    }

    return n + somaNumeros(n-1);
}


int main(){
    int num;
    printf("Digite um numero para ser usado como parametro: ");
    scanf("%d", &num);
    printf("%d", somaNumeros(num));

    return 0;
}