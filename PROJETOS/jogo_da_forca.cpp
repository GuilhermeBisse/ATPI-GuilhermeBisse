#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    srand(time(NULL));

    
    char *palavra[] = { 
    "abacaxi",
    "abacate",
    "abacaxi",
    "biscoito",
    "bola",
    "cachorro",
    "cachoeira",
    "calendario",
    "carro",
    "cavalo",
    "cebola",
    "chuva",
    "computador",
    "dinossauro",
    "elefante",
    "escola",
    "faca",
    "festa",
    "futebol",
    "garrafa",
    "gato",
    "girafa",
    "golfinho",
    "grape",
    "hotel",
    "jacare",
    "jardim",
    "java",
    "joia",
    "leão",
    "livro",
    "luz",
    "macaco",
    "manteiga",
    "mesa",
    "mola",
    "navio",
    "ocelote",
    "olho",
    "pato",
    "peixe",
    "piano",
    "quadro",
    "rato",
    "sacola",
    "salada",
    "sol",
    "tigre",
    "tornado",
    "urso",
    "vaca",
    "vela",
    "viagem",
    "xadrez",
    "xaxim",
    "yeti",
    "zebra",
    "zoo",
    "abajur",
    "abóbora",
    "abóbora",
    "agora",
    "almofada",
    "amarelo",
    "amigo",
    "açúcar",
    "bala",
    "batata",
    "bola",
    "cabelo",
    "café",
    "cama",
    "caneta",
    "carne",
    "cesta",
    "chuva",
    "computador",
    "cravo",
    "cesta",
    "esmalte",
    "fogo",
    "fofura",
    "gelo",
    "gol",
    "iguana",
    "internet",
    "joelho",
    "jogo",
    "laranja",
    "leite",
    "maçã",
    "mar",
    "navalha",
    "pente",
    "porta",
    "pote",
    "raiz",
    "roupa",
    "sabão",
    "tinta",
    "túnel",
    "urso",
    "vegetal",
    "vela",
    "voar",
    "xaxim",
    "zangão",
    "zebra"
};
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


