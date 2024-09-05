
#include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    float preco_produto = 0.0, aliquota_imposto = 0.0;

    cout << "\n\tInsira o preço do produto: ";
    cin >> preco_produto;

    cout << "\tInsira a alíquota do produto: ";
    cin >> aliquota_imposto;

    cout << "\n\tO valor pago em imposto é de " << preco_produto * (aliquota_imposto / 100) << " R$.";
    cout << "\n\tO valor do produto sem imposto é de " << preco_produto - (preco_produto * (aliquota_imposto/100)) << " R$.\n\n";


}
