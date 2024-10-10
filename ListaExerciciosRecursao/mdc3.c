#include <stdio.h>

int mdc(int a, int b){
    if(b==0){
        return a;
    }
    return mdc(b, a%b);
}

int mdc3(int a, int b, int c){
    return mdc(mdc(a, b), c);
}


int main(){
    int num1, num2, num3;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);
    int resultado = mdc3(num1, num2, num3);
    printf("O mdc entre %d, %d e %d e o: %d ", num1, num2, num3, resultado);

    return 0;
}