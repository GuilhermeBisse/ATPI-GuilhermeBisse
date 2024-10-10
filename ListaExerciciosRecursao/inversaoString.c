#include <stdio.h>
#include <string.h>

void inversaoString(char* str, int i, int f) {
    if (i >= f) {
        return;
    }

    char temp = str[i];
    str[i] = str[f];
    str[f] = temp;

    inversaoString(str, i + 1, f - 1);
}

int main() {
    char str[1024];

    printf("Digite uma string: ");
    scanf("%s", str);
    
    printf("Antes da inversao: %s\n", str);
    
    inversaoString(str, 0, strlen(str) - 1);
    
    printf("Depois da inversao: %s\n", str);

    return 0;
}
