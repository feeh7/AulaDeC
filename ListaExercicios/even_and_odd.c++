#include <iostream>

using namespace std;

int main() {
    int numero = 0;
    cout << "Ola, Digite um numero e irei fazer uma pequena validacao para te dizer se esse numero e impar ou par!" << endl;
    cout << "Digite o numero aqui: " << endl;
    cin >> numero;
    cout << "O numero digitado foi o: " << numero;
    
    if (numero % 2 == 0 ) 
    {
        cout << " e ele e um numero par";
    }
    else 
    {
        cout << " e ele e um numero impar";
    }
    
    return 0;
}