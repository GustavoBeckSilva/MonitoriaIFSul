
#include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    float faturamento;

    cout << "\n\tInsira o faturamento do mercado: ";
    cin >> faturamento;

    cout << "\n\tO valor doado ao fim do m�s � de R$ " << faturamento * (1.0/100.0) << ".\n\n";


    return 0;

}
