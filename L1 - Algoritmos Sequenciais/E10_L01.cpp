
#include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    float quilos_de_comida_disponiveis, consumo_diario;

    cout << "\n\tInsira a quantidade de quilos de alimento disponíveis: ";
    cin >> quilos_de_comida_disponiveis;
    cout << "\n\tInsira o consumo diário de comida em Kg: ";
    cin >> consumo_diario;

    cout << "\n\tHá mais " << quilos_de_comida_disponiveis / consumo_diario << " dias de comida.\n\n";

    return 0;

}
