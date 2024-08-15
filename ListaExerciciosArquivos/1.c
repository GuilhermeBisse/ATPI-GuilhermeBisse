#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arq;
    char nomes[5][1024];
    int i = 0;
    
    
    while (i < 5) {
        printf("Digite o %d nome: ", i + 1);
        scanf("%s", nomes[i]);
        i++;
    }
    
   
    arq = fopen("origem.txt", "w");
    if (arq == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo.\n");
        return 1;
    }
  
  
    i = 0;
    while (i < 5) {
        fprintf(arq, "%s\n", nomes[i]);
        i++;
    }
    
   
    fclose(arq);
    
    return 0;
}

