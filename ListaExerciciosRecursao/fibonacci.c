#include <stdio.h>

int fibonacci(int n){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}


int main(){
    int termo;
    printf("Digite a posicao do termo : ");
    scanf("%d", &termo);
    int resultado = fibonacci(termo);
    printf("O termo %d da sequencia de Fibonacci e: %d", termo, resultado);
    return 0;
}