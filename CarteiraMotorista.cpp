   #include <iostream>

   using namespace std;

   int main ()
   {
     int idade;
     bool permisao = false;
     bool numero_valid = false ;
     bool acidentes = false;

     cout << boolalpha;
     cout << "Descubra se voce para ser motorista de entrega "<< endl;
    cout << "Insira sua idade " << endl ;
    cin >> idade;

   cout << "Voce possui a permisao dos seus pais" << endl;
   cout << "Digite 1 para sim " << endl << "Ou digite 0 para nao" << endl;
   cin >> permisao ;

   cout << "Voce possui numero de seguro social valido ";
    cout << "Digite 1 para sim " << endl << "Ou digite 0 para nao" << endl;
   cin >> numero_valid;

   cout << "Voce ja se envolveu em algum tipo de acidente de transito";
    cout << "Digite 1 para sim " << endl << "Ou digite 0 para nao" << endl;
   cin >> acidentes ;

  if (idade>18 && numero_valid == 1 && acidentes == 0 || idade > 15 && permisao && numero_valid == 1 && acidentes == 0)
   {cout << "Voce esta apto para ser motorista de entrega "; }
   else 
   {cout << "Voce nao esta apto ";
   }


    return 0;
   }