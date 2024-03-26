#include <iostream>
using namespace std;

int main() {
    int centavos, reais;

    // Pedindo o valor dos centavos
    cout << "Digite a quantidade de centavos: ";
    cin >> centavos;

    // Pedindo o valor dos reais
    cout << "Digite a quantidade de reais: ";
    cin >> reais;

    // Calculando as notas de 100
    int notas100 = reais / 100;
    reais %= 100;

    // Calculando as notas de 50
    int notas50 = reais / 50;
    reais %= 50;

    // Calculando as notas de 20
    int notas20 = reais / 20;
    reais %= 20;

    // Calculando as notas de 10
    int notas10 = reais / 10;
    reais %= 10;

    // Calculando as notas de 5
    int notas5 = reais / 5;
    reais %= 5;

    // Calculando as notas de 2
    int notas2 = reais / 2;
    reais %= 2;

    // Imprimindo as notas de reais
    cout << "Notas de 100: " << notas100 << endl;
    cout << "Notas de 50: " << notas50 << endl;
    cout << "Notas de 20: " << notas20 << endl;
    cout << "Notas de 10: " << notas10 << endl;
    cout << "Notas de 5: " << notas5 << endl;
    cout << "Notas de 2: " << notas2 << endl;

    // Imprimindo as moedas
    cout << "Moedas de 1 real: " << reais << endl;
    cout << "Moedas de 50 centavos: " << centavos / 50 << endl;
    centavos %= 50;
    cout << "Moedas de 25 centavos: " << centavos / 25 << endl;
    centavos %= 25;
    cout << "Moedas de 10 centavos: " << centavos / 10 << endl;
    centavos %= 10;
    cout << "Moedas de 5 centavos: " << centavos / 5 << endl;
    centavos %= 5;
    cout << "Moedas de 1 centavo: " << centavos << endl;

    return 0;
}
