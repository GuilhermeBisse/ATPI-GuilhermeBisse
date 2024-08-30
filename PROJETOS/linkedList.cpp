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

    // Loop para adicionar 10 funcion�rios
    for(int i = 0; i < 10; i++){
        // Alocar mem�ria para um novo funcion�rio
        temp = (struct regFunc*)malloc(sizeof(struct regFunc));
        if(temp == NULL){
            printf("Erro de aloca��o de memoria!\n");
            exit(1);
        }

        // Entrada de dados
        printf("Digite o numero da matricula %d: ", i + 1);
        scanf("%d", &temp->numMatricula); // Corrigido para usar &

        printf("Digite o nome do funcionario %d: ", i + 1);
        scanf("%s", temp->nome); 

        // Ajusta o pr�ximo n�
        temp->prox = NULL;

        // Se for o primeiro n�, ajuste a cabe�a da lista
        if(listaRFunc == NULL){
            listaRFunc = temp;
        } else {
            ultimo->prox = temp;
        }

        // Atualize o ponteiro "�ltimo"
        ultimo = temp;
    }

    // Percorre e imprime a lista
    percorrer(listaRFunc);
	
	
	
	
	
	return 0;
}
