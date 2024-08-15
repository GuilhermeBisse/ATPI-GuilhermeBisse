#include <stdio.h>

int main() {
    FILE *arq;
    char ch;
    int cont = 0;

   
    arq = fopen("origem.txt", "r");
    if (arq == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

   
    while ((ch = fgetc(arq)) != EOF) {
        
        if (ch == '\n') {
            cont++;
        }
    }

    
    
    fclose(arq);

    
    printf("Numero de linhas no arquivo 'nomes.txt': %d\n", cont);

    return 0;
}

