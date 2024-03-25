   #include <iostream>

   using namespace std;

   float temp;
   float vento;

   int main ()
   {
        cout << boolalpha;
        cout << "Descubra se voce vai precisar de casaco hoje " << endl;
        cout << "Insira a temperatura em Celsius e a Velocidade do vento em km/h separador por um espaco:" ;
        cin >> temp >> vento;

        if (temp < 15 || vento > 40)
        {
            cout << "Voce vai precisar de um casaco";
        }
        else 
        {
            cout << "Voce nao precisa de um casaco";
        }
     
    return 0;
   }