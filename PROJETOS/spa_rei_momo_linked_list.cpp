#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Hospede {
    int num_cadastro;
    char nome[50];
    int qtd_dias;
    bool alta;
    int pesoi;
    int pesof;
    struct Hospede* proximo;  // Ponteiro para o próximo nó
} Hospede;

// Função para criar um novo hospede
Hospede* criarHospede() {
    Hospede* novo = (Hospede*)malloc(sizeof(Hospede));
    if (novo == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }
    novo->proximo = NULL;
    return novo;
}

// Função para adicionar um hospede ao final da lista
void adicionarHospede(Hospede** cabeca) {
    Hospede* novo = criarHospede();
    printf("Digite os dados do paciente, por favor:\n");
    printf("Numero do cadastro: ");
    scanf("%d", &novo->num_cadastro);
    printf("Nome do hospede: ");
    scanf("%s", novo->nome);
    printf("Quantidade de diarias: ");
    scanf("%d", &novo->qtd_dias);
    printf("Peso inicial do hospede, em quilos: ");
    scanf("%d", &novo->pesoi);
    novo->alta = false;

    if (*cabeca == NULL) {
        *cabeca = novo;
    } else {
        Hospede* temp = *cabeca;
        while (temp->proximo != NULL) {
            temp = temp->proximo;
        }
        temp->proximo = novo;
    }
}

// Função para dar alta a um hospede
void darAlta(Hospede* cabeca, int num_cadastro) {
    Hospede* temp = cabeca;
    while (temp != NULL) {
        if (temp->num_cadastro == num_cadastro) {
            temp->alta = true;
            printf("Digite o peso final do hospede, em quilos: ");
            scanf("%d", &temp->pesof);
            return;
        }
        temp = temp->proximo;
    }
    printf("Hospede não encontrado.\n");
}

// Função para exibir todos os registros
void exibirRegistros(Hospede* cabeca) {
    Hospede* temp = cabeca;
    printf("\nRegistros dos Hospedes:\n");
    while (temp != NULL) {
        printf("Numero do Cadastro: %d\n", temp->num_cadastro);
        printf("Nome: %s\n", temp->nome);
        printf("Quantidade de Diarias: %d\n", temp->qtd_dias);
        printf("Peso Inicial: %d\n", temp->pesoi);
        printf("Peso Final: %d\n", temp->pesof);
        printf("Alta: %s\n\n", temp->alta ? "Sim" : "Não");
        temp = temp->proximo;
    }
}

// Função para liberar a memória usada pela lista
void liberarLista(Hospede* cabeca) {
    Hospede* temp;
    while (cabeca != NULL) {
        temp = cabeca;
        cabeca = cabeca->proximo;
        free(temp);
    }
}

int main() {
    Hospede* cabeca = NULL;
    int op = 0, num, quantos;

    while(op != 4) {
        printf("SEJA MUITO BEM-VINDO AO SPA REI MOMO!\n");
        printf("SELECIONE UMA DAS OPÇÕES ABAIXO:\n");
        printf("1 - CADASTRAR HOSPEDE\n");
        printf("2 - DAR BAIXA EM PACIENTE\n");
        printf("3 - EXIBIR REGISTROS\n");
        printf("4 - SAIR\n");
        scanf("%d", &op);

        if (op == 1) {
            printf("Quantos hospedes deseja cadastrar? ");
            scanf("%d", &quantos);
            for (int i = 0; i < quantos; i++) {
                adicionarHospede(&cabeca);
            }
        } else if (op == 2) {
            printf("Digite o numero do hospede que deseja dar baixa: ");
            scanf("%d", &num);
            darAlta(cabeca, num);
        } else if (op == 3) {
            exibirRegistros(cabeca);
        }
    }

    liberarLista(cabeca);
    return 0;
}

