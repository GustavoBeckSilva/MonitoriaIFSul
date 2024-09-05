
#include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    float velocidade;

    cout << "\n\tInsira a velocidade em m/s: ";
    cin >> velocidade;

    cout << "\n\n\tA velocidade convertida é " << velocidade * 3.6 << " km/h.\n\n\n";

    return 0;

}
