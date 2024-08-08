#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    srand(time(NULL));

    
    char *palavra[] = {"amora", "abajur", "armario", "vaso", "geladeira", "gaveta"};
    int tamanho = sizeof(palavra) / sizeof(palavra[0]);
    char *palavra_aleatoria = palavra[rand() % tamanho];
    int comprimento = strlen(palavra_aleatoria);

    
    char chute;
    int acertos = 0;
    int erros = 0;
    char palavra_oculta[comprimento + 1];

    
    for (int i = 0; i < comprimento; i++) {
        palavra_oculta[i] = '_';
    }
    palavra_oculta[comprimento] = '\0';

   
    while (acertos < comprimento) {
    	int restante = (5 - erros);
        printf("Palavra: %s\n", palavra_oculta);
        printf("Voce tem mais %d tentativas!\n", restante);
        printf("Digite o seu chute: ");
        scanf(" %c", &chute);

        int encontrado = 0;
        for (int i = 0; i < comprimento; i++) {
            if (palavra_aleatoria[i] == chute && palavra_oculta[i] == '_') {
                palavra_oculta[i] = chute;
                acertos++;
                encontrado = 1;
            }
            
        }

        if (!encontrado) {
            printf("Letra incorreta!\n");
            erros++;
        } else {
            printf("Letra correta!\n");
        }

        printf("\n");
        
		if (erros >= 5){
			break;
		}  
    }
	
	if(acertos == comprimento){
		printf("Parabens! Voce adivinhou a palavra: %s\n", palavra_aleatoria);
	}
	else{
		printf("Voce morreu! A palavra era: %s\n", palavra_aleatoria);
	}
    

    return 0;
}


