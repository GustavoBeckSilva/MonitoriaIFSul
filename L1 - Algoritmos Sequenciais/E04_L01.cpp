
#include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    float altura, largura, comprimento, vazao;

    cout << "\n\tInsira quantos metros de altura tem a caixa: ";
    cin >> altura;
    cout << "\tInsira quantos metros de largura tem a caixa: ";
    cin >> largura;
    cout << "\tInsira quantos metros de comprimento tem a caixa: ";
    cin >> comprimento;
    cout << "\tInsira a vazão da torneira: ";
    cin >> vazao;

    cout << "\n\n\tA caixa d'água será totalmente enchida em " << (altura * largura * comprimento) / vazao << " horas.\n\n\n";

    return 0;

}
