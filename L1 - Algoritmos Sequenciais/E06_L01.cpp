
#include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3;

    cout << "\n\tInsira o número 1: ";
    cin >> n1;
    cout << "\tInsira o número 2: ";
    cin >> n2;
    cout << "\tInsira o número 3: ";
    cin >> n3;

    cout << "\n\n\tA média harmônica entre os números " << n1 << ", " << n2 << " e " << n3 << " é " << 3.0 / ((1.0 / n1) + (1.0 / n2) + (1.0 / n3)) << "\n\n";

    return 0;

}
