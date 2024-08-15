#include <stdio.h>
#include <stdlib.h>

int main() {
    
	 FILE *arq = fopen("origem.txt", "r");
	
	char str[50];
	while(fgets(str, sizeof(str), arq) != NULL){
		printf("%s", str);	
	}
 
 
 
 	return 0;   
}
