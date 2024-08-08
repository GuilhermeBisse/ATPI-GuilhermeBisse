#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
    char str[] = "chamine";
    char vogais[] = "aeiou";
    int contadorVogais = 0;
    char str1[] = "machado";
    char substr[20] = "";  

    // Comprimento da string
    printf("O comprimento e: %lu \n", strlen(str));
    
    getch();

    // Imprimir a string invertida
    printf("A string invertida: "); 
    for (int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

	getch();
    // Contar vogais
    for (int i = 0; i < strlen(str); i++) {
        for (int j = 0; j < strlen(vogais); j++) {
            if (str[i] == vogais[j]) {
                contadorVogais++;
                break;
            }
        }
    }
    printf("A quantidade de vogais nessa string e: %d \n", contadorVogais);
	
	getch();
    // Verificar se é um palíndromo
    int comprimento = strlen(str);
    int ePalindromo = 1;
    for (int i = 0; i < comprimento / 2; i++) {
        if (str[i] != str[comprimento - 1 - i]) {
            ePalindromo = 0;
            break;
        }
    }

    if (ePalindromo) {
        printf("Essa string e um palindromo! \n");
    } else {
        printf("Essa string nao e um palindromo! \n");
    }

   	getch();
   
    int index = 0;  
    for (int i = 0; i < strlen(str); i++) {
        for (int j = 0; j < strlen(str1); j++) {
            if (str[i] == str1[j]) {
                
                int existe = 0;
                for (int k = 0; k < index; k++) {
                    if (substr[k] == str[i]) {
                        existe = 1;
                        break;
                    }
                }
                if (!existe) {
                    substr[index++] = str[i];
                }
                break;
            }
        }
    }
    substr[index] = '\0';  

    printf("A substring e: %s \n", substr);
	
	
    return 0;
}

