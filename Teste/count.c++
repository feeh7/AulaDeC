#include <iostream>

using namespace std;

int main() {
    int numero = 0;
    cout << "Ola digite um numero e irei fazer uma contagem regressiva ate o 0" << endl;
    cout << "Digite o numero aqui: " << endl;
    cin >> numero;

   for(int i = numero; i >= 0; i--)
   {
        cout << i << endl;
   }
    
}