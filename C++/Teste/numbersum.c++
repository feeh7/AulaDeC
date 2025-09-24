#include <iostream>

using namespace std;

int main() {
    int numerosasomar = 0;
    int numerosomado = 0;
    int total = 0;
    cout << "Ola digite quantas vezes ira querer somar seu numeros?" << endl;
    cout << "Digite o numero aqui: " << endl;
    cin >> numerosasomar;

   for(int i = 1; i <= numerosasomar; i++)
   {
        cout << "Digite o valor a ser somado com o proximo numero" << endl;
        cin >> numerosomado;
        total = total + numerosomado;
   }
    cout << total;
    
}