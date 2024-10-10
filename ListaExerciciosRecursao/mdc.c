#include <stdio.h>

int mdc(int a, int b){
    if(b==0){
        return a;
    }
    return mdc(b, a%b);
}


int main(){
    int num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    int resultado = mdc(num1, num2);
    printf("O mdc entre %d e %d e: %d ", num1, num2, resultado);

    return 0;
}