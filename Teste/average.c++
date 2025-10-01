#include <iostream>
using namespace std;

int main() {
    double notaum = 0;
    double notadois = 0;
    double notatres = 0;
    double somadasnotas = 0;
    double media = 0;
    cout << "Ola digite suas 3 notas esse bimestre e irei calcular a sua media, assim dizendo se você foi reprovado ou aprovado!" << endl;
    cout << "Antes de tudo aqui está a tabela de notas para se basear! " << endl;
    cout << "APROVADO = NOTA -> 5.0 <= 10" << endl;
    cout << "REPROVADO = NOTA <- 5.0 >= 0" << endl;
    cout << "INVALIDO = QUALQUER COISA DIFERENTE DESSE PADRÃO" << endl;
    cout << "Digite a primeira nota: " << endl;
    cin >> notaum;
    cout << "Digite a segundanota: " << endl;
    cin >> notadois;
    cout << "Digite a terceira nota: " << endl;
    cin >> notatres;

    somadasnotas = notaum + notadois + notatres;
    media = somadasnotas / 3;

    if (media >= 5 && media <= 10)
    {
        cout << "Parabéns, sua nota foi: " << media << " e você está aprovado!";
    }
    else if (media < 5 && media >= 0 )
    {
        cout << "Infelizmente você foi reprovado pois tirou uma nota: " << media << ", tente se recuperar no proximo bimestre";
    }
    else
    {
        cout << "Valores invalidos";
    }
}