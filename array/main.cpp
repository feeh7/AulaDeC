#include <iostream>

using namespace std;

int main()
{
    int total = 0;
    int tamanho = 0;
    int valormedia = 0;
    cout << "Informe quantos numeros terao a nota:";
    cin >> tamanho;
    int notas[tamanho];

    for(int i=0; i < tamanho; i++)
    {
        cout << "Numero : " << i << ":";
        cin >> notas[i];
    }

    for(int i = 0; i < tamanho; i++)
    {
        cout << notas[i] << endl;
    }

    for(int i = 0; i < tamanho; i++)
    {
        if(notas[i] > notas[i+1])
        {
          cout << "O numero " << notas[i] << " e maior que o numero " << notas[i+1] << endl;
        }
    }
}


/*cout << "O numero " << notas[i] << " e maior que o numero " << notas[i+1] << endl;*/
