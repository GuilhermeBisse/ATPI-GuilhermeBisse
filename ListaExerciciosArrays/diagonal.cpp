#include <iostream>
using namespace std;

int main()
{
    const int LIMITE = 3;

    int somaDiagonalPrincipal = 0, somaDiagonalSecundaria = 0;
    int matriz[LIMITE][LIMITE];

    cout << "Digite os valores das matrizes: " << endl;
    for(int i = 0; i < LIMITE; i++){
        for(int j = 0; j < LIMITE; j++){
            cin >> matriz[i][j];
        }
    }

    for(int i = 0; i < LIMITE; i++){
        for(int j = 0; j < LIMITE; j++){
            if (i == j){
                somaDiagonalPrincipal += matriz[i][i];
            }
            else if (i + j == LIMITE - 1) {
                somaDiagonalSecundaria += matriz[i][i];
            }
        }
    }


    if (somaDiagonalPrincipal > somaDiagonalSecundaria){
        cout << "Principal e maior: " << somaDiagonalPrincipal << endl;
    }

    else if (somaDiagonalPrincipal > somaDiagonalSecundaria){
        cout << "Secundaria e maior: " << somaDiagonalSecundaria << endl;
    }

    else {
        cout << "As diagonais sao iguais" << endl;
    }


    return 0;
}