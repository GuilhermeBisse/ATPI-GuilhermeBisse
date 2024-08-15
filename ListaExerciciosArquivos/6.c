#include <stdio.h>
#include <string.h>

int main() {
	
	char str1[1024];
	char str2[1024];
	
	FILE *arq1 = fopen("arq1.txt", "r");
	if(arq1 == NULL){
		printf("ERRO AO ABRIR O ARQUIVO 1! ");
		fclose(arq1);
		return 1;
	}
	FILE *arq2 = fopen("arq2.txt", "r");
	if(arq2 == NULL){
		printf("ERRO AO ABRIR O ARQUIVO 2! ");
		fclose(arq2);
		return 1;
	}
	FILE *arq3 = fopen("arq3.txt", "w");
	if(arq3 == NULL){
		printf("ERRO AO ABRIR O ARQUIVO 3! ");
		fclose(arq3);
		return 1;
	}
	
	while(fgets(str1, sizeof(str1), arq1) != NULL){
    	fprintf(arq3, "%s", str1);
	}
	
	printf("\n");
	
	while(fgets(str2, sizeof(str1), arq2) != NULL){
    	fprintf(arq3, "%s", str2);
	}
	

	return 0;
}
	
