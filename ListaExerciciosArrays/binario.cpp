#include <iostream>
using namespace std;

int inteiro_binario(int num){
	
	int sequencia[32];
	int indice = 0;
	int resto;
	
	while (num > 0){
		resto = num % 2;
		sequencia[indice] = resto;
		indice++;
		num /= 2;	
	}
	
	int binario = 0;
	for (int i = indice-1; i>= 0; i--){
		binario = (binario + sequencia[i]) * 10;
	}

    return binario;
}
	


int main(){
	int numero;
	
	cout << "Digite um numero para ser transformado em binario: " << endl;
	cin >> numero;
	
	int binario = inteiro_binario(numero);
	cout << "O numero " << numero << " transformado em binario e: " << binario << endl;
	
	
}
