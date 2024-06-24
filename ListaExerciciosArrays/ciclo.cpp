#include <iostream>
using namespace std;
 
int main(){

    int n, num = 0;
    int array[1024];

    cout << "Informe n: " << endl;
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "Informe a casa " << i << endl;
        cin >> array[i];
        if (array[i] > n){
            cout << "VALOR FORA DA FAIXA " << endl;
            cout << "Informe a casa " << i << endl;
            cin >> array[i];
        }
        for (int j = i - 1; j >= 0; j--){
            if(array[i] == array[j]){
                cout << array[j] << " JA CONSTA NA SEQUENCIA " << endl;
                cout << "Informe a casa " << i << endl;
                cin >> array[i];
            }
        }
    }
 
    cout << "o ciclo eh: 0 ";
    do {
        cout << array[num] << " ";
        num = array[num];
    } while (num != 0);




    return 0;
}