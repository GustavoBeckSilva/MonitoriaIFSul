
#include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    float distancia_percorrida, litros_gastos, valor_litro_combustivel;

    cout << "\n\tInsira a dist�ncia percorrida: ";
    cin >> distancia_percorrida;
    cout << "\tInsira a quantidade de litros gastos: ";
    cin >> litros_gastos;
    cout << "\tInsira o valor do litro do combust�vel: ";
    cin >> valor_litro_combustivel;

    cout << "\n\n\tO valor gasto em combust�vel foi de R$ " << litros_gastos * valor_litro_combustivel << " e a m�dia de consumo de combust�vel foi de " << distancia_percorrida / litros_gastos << " km/l.\n\n";

    return 0;

}
