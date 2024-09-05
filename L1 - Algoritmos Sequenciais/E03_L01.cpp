
#include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    const float taxa_selic = 10.5 / 100;
    float valor_inicial;
    int tempo;

    cout << "\n\tInsira o valor do investimento inicial: ";
    cin >> valor_inicial;

    cout << "\tInsira quantos anos o valor ficará investido: ";
    cin >> tempo;

    cout << "\n\n\tR$" << valor_inicial * taxa_selic * (float)tempo << " foi o valor acumulado dos juros e R$ " << (valor_inicial * taxa_selic * (float)tempo) + valor_inicial << " o valor do montante.\n\n\n";

    return 0;

}
