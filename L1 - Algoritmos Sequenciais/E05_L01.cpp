
#include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    int velocidade_media, distancia_percorrida;

    cout << "\n\tInsira a velocidade m�dia estipulada: ";
    cin >> velocidade_media;
    cout << "\tInsira a dist�ncia percorrida: ";
    cin >> distancia_percorrida;

    cout << "\n\n\tPara percorrer o percurso, estipula-se que levar� " << (float)distancia_percorrida / (float)velocidade_media  << " horas.\n\n";

    return 0;

}
