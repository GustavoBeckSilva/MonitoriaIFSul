
#include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3;

    cout << "\n\tInsira o n�mero 1: ";
    cin >> n1;
    cout << "\tInsira o n�mero 2: ";
    cin >> n2;
    cout << "\tInsira o n�mero 3: ";
    cin >> n3;

    cout << "\n\n\tA m�dia harm�nica entre os n�meros " << n1 << ", " << n2 << " e " << n3 << " � " << 3.0 / ((1.0 / n1) + (1.0 / n2) + (1.0 / n3)) << "\n\n";

    return 0;

}
