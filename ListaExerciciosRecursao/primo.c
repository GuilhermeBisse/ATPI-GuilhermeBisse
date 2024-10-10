#include <stdio.h>
#include <math.h>

int primo(int n, int div){
    if(div*div > n){
        return 0;
    }
    if(n%div == 0){
        return 1;
    }
    return primo(n, div+1);
}


int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num == 1){
        printf("O numero %d nao e primo", num);
    }
    else if(primo(num, 2)){
        printf("O numero %d e primo", num);
    }
    else{
        printf("O numero %d nao e primo", num);
    }
    

    return 0;
}