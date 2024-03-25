   #include <iostream>

   using namespace std;

   float dolar;
   float euro;
   float real;

   int main ()
   {
        cout << "Bem vindo ao Convertor de Reais em Euro e Dolares" << endl;
        cout << "Insira o seu valor em reais [6.99]";
        cin >> real;

        euro = real / 5.39;
        dolar = real /4.97;

    cout << "Seu valor convertido na atual cotacao dolar/euro/real " << endl;
    cout <<"Em dolares ficou igual a " << dolar << endl;  
     cout <<"Em Euro ficou igual a " << euro << endl;


    return 0;
   }