#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_HOSPEDE 20

struct Hospede {
    int num_cadastro;
    char nome[50];
    int qtd_dias;
    bool alta;
    int pesoi;
    int pesof;
};

struct Hospede cadastro[MAX_HOSPEDE];

void Cadastro(struct Hospede *hospede) {
    printf("Digite os dados do paciente, por favor:\n");
    printf("Numero do cadastro: ");
    scanf("%d", &hospede->num_cadastro);
    printf("Nome do hospede: ");
    scanf("%s", hospede->nome);
    printf("Quantidade de diarias: ");
    scanf("%d", &hospede->qtd_dias);
    printf("Peso inicial do hospede, em quilos: ");
    scanf("%d", &hospede->pesoi);
    hospede->alta = false;
}

void darAlta(struct Hospede *hospede) {
    hospede->alta = true;
    printf("Digite o peso final do hospede, em quilos: ");
    scanf("%d", &hospede->pesof);
}

int main() {
    int op = 0;
    int num, quantos;

    while(op != 4) {
        printf("SEJA MUITO BEM-VINDO AO SPA REI MOMO!\n");
        printf("SELECIONE UMA DAS OPCOES ABAIXO:\n");
        printf("1 - CADASTRAR HOSPEDE\n");
        printf("2 - DAR BAIXA EM PACIENTE\n");
        printf("3 - EXIBIR HOSPEDES CADASTRADOS: \n");
        printf("4 - SAIR\n");
        scanf("%d", &op);

        if (op == 1) {
            printf("Quantos hospedes deseja cadastrar? ");
            scanf("%d", &quantos);

            if (quantos > MAX_HOSPEDE) {
                printf("Número máximo de hospedes é %d.\n", MAX_HOSPEDE);
                quantos = MAX_HOSPEDE;
            }

            for (int i = 0; i < quantos; i++) {
                Cadastro(&cadastro[i]);
            }
		} 
			
		else if (op == 2) {
        	printf("Digite o numero do hospede que deseja dar baixa: ");
            scanf("%d", &num);

            for (int i = 0; i < MAX_HOSPEDE; i++) {
                if (cadastro[i].num_cadastro == num) {
                    darAlta(&cadastro[i]);
                    break;
                }
            }
        }
        
        else if (op == 3){
        	printf("REGISTRO DOS HOSPEDES: \n");
        	for (int i = 0; i < MAX_HOSPEDE; i++) {
        		if (cadastro[i].num_cadastro != 0) {  
		            printf("Numero do Cadastro: %d\n", cadastro[i].num_cadastro);
		            printf("Nome: %s\n", cadastro[i].nome);
		            printf("Quantidade de Diarias: %d\n", cadastro[i].qtd_dias);
		            printf("Peso Inicial: %d\n", cadastro[i].pesoi);
		            printf("Peso Final: %d\n", cadastro[i].pesof);
		            printf("Alta: %s\n\n", cadastro[i].alta ? "Sim" : "Nao");
        		}
   	 		}
		}
		
		
		
    }
    return 0;
}

