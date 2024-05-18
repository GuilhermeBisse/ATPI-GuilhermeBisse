#include <iostream>
using namespace std;

// Função para mostrar o layout do ônibus com as cadeiras que estarão na sombra
void mostrarOnibus(char onibus[5][4], bool sombraEsquerda) {
    cout << "Mapa do onibus: (X - ocupado, O - livre, S - sombra)" << endl;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 4; ++j) {
            if ((sombraEsquerda && j < 2) || (!sombraEsquerda && j >= 2)) {
                if (onibus[i][j] == 'O') {
                    cout << "S ";
                } else {
                    cout << onibus[i][j] << " ";
                }
            } else {
                cout << onibus[i][j] << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    char onibus[5][4]; // 10 fileiras de 4 cadeiras cada

    // Inicializa todas as cadeiras como 'O' (livre)
    for (int i = 0; i <= 5; ++i) {
        for (int j = 0; j <= 4; ++j) {
            onibus[i][j] = 'O';
        }
    }

    string direcao;
    int horario;
    int passagens;
    const float precoPassagem = 50.0;

    cout << "Bem-vindo ao sistema de compra de passagens!" << endl;
    cout << "Escolha a direcao da viagem:" << endl;
    cout << "1. CidadeAoNorte para CidadeAoSul" << endl;
    cout << "2. CidadeAoSul para CidadeAoNorte" << endl;
    cin >> direcao;

    cout << "Escolha o horario da viagem:" << endl;
    cout << "1. 8:00" << endl;
    cout << "2. 10:00" << endl;
    cout << "3. 12:00" << endl;
    cout << "4. 14:00" << endl;
    cout << "5. 16:00" << endl;
    cin >> horario;

    bool sombraEsquerda = false;
    if (direcao == "1") { // Norte -> Sul
        if (horario == 1 || horario == 2) {
            sombraEsquerda = true;
        }
    } else if (direcao == "2") { // Sul -> Norte
        if (horario == 4 || horario == 5) {
            sombraEsquerda = true;
        }
    }

    mostrarOnibus(onibus, sombraEsquerda);

    cout << "Quantas passagens voce deseja comprar? ";
    cin >> passagens;

    for (int i = 0; i < passagens; ++i) {
        int linha, coluna;
        cout << "Selecione a linha (1-5) e coluna (1-4) para a passagem " << i + 1 << ": ";
        cin >> linha >> coluna;
        if (linha >=1 && linha <= 5 && coluna >= 1 && coluna <= 4 && onibus[linha][coluna] == 'O') {
            onibus[linha-1][coluna-1] = 'X'; // Marca a cadeira como ocupada
        } else {
            cout << "Assento inválido ou já ocupado. Tente novamente." << endl;
            --i; // Decrementa para permitir uma nova tentativa
        }
        mostrarOnibus(onibus, sombraEsquerda);
    }

    float valorTotal = passagens * precoPassagem;
    cout << "Valor total: R$" << valorTotal << endl;

    return 0;
}
