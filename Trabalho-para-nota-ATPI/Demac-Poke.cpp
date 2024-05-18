#include <iostream>

using namespace std;

struct Item {
    const char* name;
    double price;
};

Item bases[] = {{"Arroz Branco", 0.0}, {"Arroz Integral", 1.0}, {"Mix de Folhas", 2.0}};
Item toppings[] = {{"Abacaxi", 1.5}, {"Manga", 2.0}, {"Pepino", 1.0}};
Item crunches[] = {{"Castanha de Caju", 1.5}, {"Cebola Crocante", 1.0}, {"Torrada de Alho", 2.0}};
Item proteins[] = {{"Salmão", 5.0}, {"Atum", 4.5}, {"Frango Grelhado", 3.5}};
Item nuts[] = {{"Amendoim", 1.0}, {"Macadâmia", 2.0}, {"Castanha do Pará", 1.5}};
Item sauces[] = {{"Molho de Soja", 1.0}, {"Molho Teriyaki", 1.5}, {"Molho de Pimenta", 1.0}};

Item* menus[] = {bases, toppings, crunches, proteins, nuts, sauces};

void displayMenu(Item* itens, int size) {
    cout << "Escolha um item:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << i + 1 << ") " << itens[i].name << " - R$ " << itens[i].price << endl;
    }
}

int main() {
    Item pedido[10];
    int escolha;
    int pedidoIndex = 0;

    while (true) {
        cout << "\n*** Menu do Demac Poke! ***\n";
        cout << "1) Bases\n2) Toppings\n3) Crunches\n4) Proteínas\n5) Nuts\n6) Molhos\n7) Finalizar pedido\n";
        cout << "Escolha uma opção: ";
        cin >> escolha;

        if (escolha == 7) {
            if (pedidoIndex == 0) {
                cout << "Você não selecionou nenhum item. Pedido cancelado.\n";
                break;
            } else {
                cout << "\n*** Pedido Finalizado ***\n";
                double total = 0.0;
                cout << "Item\t\tPreço\n";
                for (int i = 0; i < pedidoIndex; ++i) {
                    cout << pedido[i].name << "\t\tR$ " << pedido[i].price << endl;
                    total += pedido[i].price;
                }
                cout << "Total:\t\tR$ " << total << endl;
                break;
            }
        }

        if (escolha < 1 || escolha > 6) {
            cout << "Opção inválida!\n";
            continue;
        }

        displayMenu(menus[escolha - 1], 3);

        int itemEscolha;
        cout << "Escolha: ";
        cin >> itemEscolha;

        if (itemEscolha < 1 || itemEscolha > 3) {
            cout << "Opção inválida!\n";
            continue;
        }

        pedido[pedidoIndex++] = menus[escolha - 1][itemEscolha - 1];
        cout << "Item adicionado ao pedido.\n";
    }

    return 0;
}
