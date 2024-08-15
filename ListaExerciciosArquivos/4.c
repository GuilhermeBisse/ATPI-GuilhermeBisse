#include <stdio.h>

int main() {
	
	char str[1024];
    
	FILE *origem = fopen("origem.txt", "r");
	if(origem == NULL){
		printf("ERRO AO ABRIR A ORIGEM! ");
		fclose(origem);
		return 1;
	}
	
	FILE *destino = fopen("destino.txt", "w");
    if(destino == NULL){
    	printf("ERRO AO ABRIR O DESTINO! ");
    	fclose(destino);
		return 1;
	}
	
	
	while(fgets(str, sizeof(str), origem) != NULL){
    	fprintf(destino, "%s", str);
	}
	
	if(ferror(origem)){
		printf("ERRO AO CARREGAR O ARQUIVO DE ORIGEM! ");
	}


	fclose(origem);
	fclose(destino);
	
	printf("COPIA CONCLUIDA COM SUCESSO! ");
	
	return 0;

}


