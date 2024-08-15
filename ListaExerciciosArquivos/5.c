#include <stdio.h>
#include <string.h>

int main() {
	
	FILE *arq = fopen("palavras.txt", "r");
	
	if(arq == NULL){
		printf("ERRO AO ABRIR A ORIGEM! ");
		fclose(arq);
		return 1;
	}

	char palavra[] = "batata";
	char char_atual;
	int i = 0;
	int linha = 0;
	
	while(!feof(arq)){
		char_atual = getc(arq);
		if (char_atual == palavra[i]){
			i++;
		}
		else{
			i = 0;
		}
		if(char_atual == '\n'){
			linha++;
		}
		if(i == strlen(palavra)){
			printf("%d\n", linha+1);
			i = 0;
		}
		
	}
	


	return 0;	
}
