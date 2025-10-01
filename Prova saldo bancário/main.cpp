#include <iostream>

using namespace std;

int main()
{
    int notaduzentos = 200;
    int notacem = 100;
    int notacinquenta = 50;
    int notavinte = 20;
    int notadez = 10;
    int notacinco = 5;
    int notadois = 2;

    int valor = 0;
    int qtd = 0;

    cout << "Ola, bem vindo ao banco da Fatec, digite quanto de dinheiro voce quer sacar e irei te entregar com a menor quantidade de cedulas possivel" << endl;
    cout << "Digite o valor aqui: ";
    cin >> valor;

    if (valor >= notaduzentos)
    {
        qtd = valor / notaduzentos;
        valor = valor % notaduzentos;
        cout << qtd << " notas de 200" << endl;
    }
    if (valor >= notacem)
    {
        qtd = valor / notacem;
        valor = valor % notacem;
        cout << qtd << " notas de 100" << endl;
    }
    if (valor >= notacinquenta)
    {
        qtd = valor / notacinquenta;
        valor = valor % notacinquenta;
        cout << qtd << " notas de 50" << endl;
    }
    if (valor >= notavinte)
    {
        qtd = valor / notavinte;
        valor = valor % notavinte;
        cout << qtd << " notas de 20" << endl;
    }
    if (valor >= notadez)
    {
        qtd = valor / notadez;
        valor = valor % notadez;
        cout << qtd << " notas de 10" << endl;
    }
    if (valor >= notacinco)
    {
        qtd = valor / notacinco;
        valor = valor % notacinco;
        cout << qtd << " notas de 5" << endl;
    }
    if (valor >= notadois)
    {
        qtd = valor / notadois;
        valor = valor % notadois;
        cout << qtd << " notas de 2" << endl;
    }

    return 0;
}