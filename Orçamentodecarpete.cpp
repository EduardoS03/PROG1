#include <iostream>

using namespace std;

double taxa, taxaT, tquartoG, tquartoP, pquartoG, pquartoP;
int quartoG, quartoP;


int main()
{
	cout << "===================" << endl << "Limpeza de Carpetes Frank" << endl << "===================" << endl;
	cout << "Seja Bem Vindo ao criador de orcamento de limpeza de carpetes do Frank " << endl;
	cout << "Opcoes" << endl << "R$100,00 o quarto pequeno" << endl << "R$150,00 o quarto grande" << endl;
	cout << " A taxa de impostos e de 6%, e nossos orcamentos sao validos por 30 dias." << endl;
	cout << "Por favor insira a quantidade quartos grandes e a quantidade de quartos pequenos separados por um espaco " << endl;
	cin >> quartoG >> quartoP;

	taxa = 0.06;
	pquartoP = (quartoP * 100);
	pquartoG = (quartoG * 150);
	tquartoP = (pquartoP * taxa);
	tquartoG = (pquartoG * taxa);
	taxaT = (tquartoP + tquartoG);

	cout << "Orcamento para servico de limpeza de carpetes :" << endl << "Numero de quartos pequenos : " << quartoP << endl;
	cout << "Numero de quartos Grandes : " << quartoG << endl << "Preco por quarto pequeno : R$" << pquartoP << endl;
	cout << "Preco por quarto Grande : R$" << pquartoG << endl << "Custo : R$" << (pquartoP + pquartoG) << endl << "Imposto : R$" << taxaT << endl;

	cout << "======================" << endl << "Orcamento Total : R$" << (pquartoP + pquartoG + taxaT) << endl << "Orcamento Valido por 30 dias";

	return 0;
}
