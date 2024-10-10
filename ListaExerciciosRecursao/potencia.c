#include <stdio.h>

int potencia(int n, int p){
    if(p == 0){
        return 1;
    }

    return n*potencia(n, p-1);
}


int main(){
    int num, pot;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Digite uma potencia: ");
    scanf("%d", &pot);
    printf("%d", potencia(num, pot));

    return 0;
}