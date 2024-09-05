
#include <iostream>

using namespace std;

int main(){

    float potencia_carregador, eficiencia_carregador, tempo_carga, porcentagem_carregada;

    setlocale(LC_ALL, "Portuguese");

    cout << "\n\tInsira a pot�ncia em watts do carregador: ";
    cin >> potencia_carregador;
    cout << "\tInsira a porcentagem de efici�ncia do carregador: ";
    cin >> eficiencia_carregador;
    cout << "\tInsira quantas horas foram usadas para carregar: ";
    cin >> tempo_carga;
    cout << "\tInsira a porcentagem de bateria carregada: ";
    cin >> porcentagem_carregada;

    float energia_fornecida = potencia_carregador * tempo_carga;
    float energia_util = energia_fornecida * (eficiencia_carregador / 100.0);
    float energia_util_mAh = energia_util * 1000.0;

    cout << "\n\tA capacidade da bateria � de " << energia_util_mAh / (porcentagem_carregada / 100.0) << " mAh.\n\n";

    return 0;

}
