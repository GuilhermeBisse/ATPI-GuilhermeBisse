#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    srand(time(NULL));

    // Lista de palavras
    char *palavra[] = {"amora", "abajur", "armario", "vaso", "geladeira", "gaveta"};
    int tamanho = sizeof(palavra) / sizeof(palavra[0]);
    char *palavra_aleatoria = palavra[rand() % tamanho];
    int comprimento = strlen(palavra_aleatoria);

    // Inicialização das variáveis
    char chute;
    int acertos = 0;
    char palavra_oculta[comprimento + 1];

    // Inicializa a palavra oculta com underscores
    for (int i = 0; i < comprimento; i++) {
        palavra_oculta[i] = '_';
    }
    palavra_oculta[comprimento] = '\0';

    // Loop do jogo
    while (acertos < comprimento) {
        printf("Palavra: %s\n", palavra_oculta);
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
        } else {
            printf("Letra correta!\n");
        }

        printf("\n");
    }

    printf("Parabéns! Você adivinhou a palavra: %s\n", palavra_aleatoria);

    return 0;
}


