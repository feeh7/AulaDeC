#include <iostream>

using namespace std;

int main() {
    int numero = 0;
    cout << "Ola digite um numero e irei mostrar a sua tabuada do 1 ao 10" << endl;
    cout << "Digite o numero aqui: " << endl;
    cin >> numero;

    cout << "o numero digitado foi: " << numero << endl;

   for(int i = 1; i <= 10; i++)
   {
        cout << "esse numero multiplicado por: " << i << " e igual a " << numero * i << endl;
   }
    
}