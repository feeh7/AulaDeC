    #include <iostream>

    using namespace std;

    int main() {
        int numeros;
        int soma = 0;
        cout << "Ola, digite 10 numeros e irei somar todos numeros pares" << endl;
        for (int i = 1; i <= 10; i++)
        {
            cout << "Digite o numero " << i << ": " << endl;
            cin >> numeros;

            if (numeros % 2 ==0 )
            {
                soma += numeros;
            }
        }
        cout << "A soma dos números pares é igual a: " << soma << endl;

    }
