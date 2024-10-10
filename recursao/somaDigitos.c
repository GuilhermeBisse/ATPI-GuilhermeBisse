#include <stdio.h>

int somaDigitos(int n){
    if (n % 10 == n){
        return n;
    }
    
    return ((n % 10) + somaDigitos(n / 10));
}


int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("%d", somaDigitos(num));

    return 0;
}