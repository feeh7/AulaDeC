#include <iostream>

using namespace std;

int main() {
    int numeroum = 0;
    int numerodois = 0;
    cout << "Ola, Digite dois numeros e irei falar qual dos dois e o maior" << endl;
    cout << "Digite o primeiro numero aqui: " << endl;
    cin >> numeroum;
    cout << "Digite o primeiro numero aqui: " << endl;
    cin >> numerodois;

    if (numeroum > numerodois)
    {
        cout << "O primeiro numero e o maior numero digitado";
    }
    else 
    {
        cout << "O segundo numero foi o maior digitado";
    }
}