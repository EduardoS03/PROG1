#include <iostream>

using namespace std;

int centavos, reais, notas100, notas50, notas20, notas10, notas5, notas2;

int main()
{

	cout << "Caixa eletronico" << endl << "Por favor insira quantos reais voce tem, e separado por um espaco os centavos EX: [93 99 = R$ 93,99]" << endl;
	cin >> reais >> centavos;

	notas100 = reais / 100;
	reais %= 100;

	notas50 = reais / 50;
	reais %= 50;

	notas20 = reais / 20;
	reais %= 20;

	notas10 = reais / 10;
	reais %= 10;

	notas5 = reais / 5;
	reais %= 5;

	notas2 = reais / 2;
	reais %= 2;

	cout << "A menor quantidade de cedulas/moedas que voce podera retirar sera : " << endl;
	cout << "Notas de 100 : " << notas100 << endl;
	cout << "Notas de 50 : " << notas50 << endl;
	cout << "Notas de 20 : " << notas20 << endl;
	cout << "Notas de 10 : " << notas10 << endl;
	cout << "Notas de 5 : " << notas5 << endl;
	cout << "Notas de 2: " << notas2 << endl;
	cout << "Moedas de 1 real : " << reais << endl;
	cout << "Moedas de 50 centavos : " << centavos / 50 << endl;
	centavos %= 50;
	cout << "Moedas de 25 centavos : " << centavos / 25 << endl;
	centavos %= 25;
	cout << "Moedas de 10 centavos : " << centavos / 10 << endl;
	centavos %= 10;
	cout << "Moedas de 5 centavos : " << centavos / 5 << endl;
	centavos %= 5;
	cout << "Moedas de 1 centavo : " << centavos << endl;

	return 0;
}
