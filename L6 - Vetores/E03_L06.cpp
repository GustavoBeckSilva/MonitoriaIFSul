#include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    int n;

    cout << "\n\tInsira o número N da sequência de Fibonacci: ";
    cin >> n;

    if(n < 0){
        system("cls");
        cout << "\n\tERRO: número inválido.\n\n";
        return 0;
    }

    int vet[n+1];
    cout << "\n\t";

    for(int i = 0; i <= n; i++){

    if(i == 0)
        vet[i] = 0;

    else if(i == 1)
        vet[i] = 1;

    else if(i >= 2)
        vet[i] = vet[i - 2] + vet[i - 1];

    cout << vet[i] << " ";

    }

    cout << "\n\n";

    return 0;

}
