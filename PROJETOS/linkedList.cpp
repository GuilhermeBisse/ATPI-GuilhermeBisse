#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct regFunc {
    int numMatricula;
    char nome[50]; // Corrigido para armazenar um nome
    struct regFunc *prox;
};

void percorrer(struct regFunc* ptr){
    while(ptr != NULL){
        printf("Numero da Matricula: %d\n", ptr->numMatricula);
        printf("Nome do Funcionario: %s\n", ptr->nome); // Corrigido para %s
        ptr = ptr->prox;
    }
}

int main(){
    struct regFunc* listaRFunc = NULL;
    struct regFunc* temp = NULL;
    struct regFunc* ultimo = NULL;

    // Loop para adicionar 10 funcionários
    for(int i = 0; i < 10; i++){
        // Alocar memória para um novo funcionário
        temp = (struct regFunc*)malloc(sizeof(struct regFunc));
        if(temp == NULL){
            printf("Erro de alocação de memoria!\n");
            exit(1);
        }

        // Entrada de dados
        printf("Digite o numero da matricula %d: ", i + 1);
        scanf("%d", &temp->numMatricula); // Corrigido para usar &

        printf("Digite o nome do funcionario %d: ", i + 1);
        scanf("%s", temp->nome); 

        // Ajusta o próximo nó
        temp->prox = NULL;

        // Se for o primeiro nó, ajuste a cabeça da lista
        if(listaRFunc == NULL){
            listaRFunc = temp;
        } else {
            ultimo->prox = temp;
        }

        // Atualize o ponteiro "último"
        ultimo = temp;
    }

    // Percorre e imprime a lista
    percorrer(listaRFunc);
	
	
	
	
	
	return 0;
}
