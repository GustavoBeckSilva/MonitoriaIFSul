#include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL, "portuguese");

    int fileiras, mesas, option;

    cout << "\n\tInsira a quantidade de fileiras: ";
    cin >> fileiras;

    if(fileiras <= 0){
        system("cls");
        cout << "\n\tERRO: Número de fileiras inválido.";
        return 0;
    }

    cout << "\tInsira a quantidade de mesas nas fileiras: ";
    cin >> mesas;

    if(mesas <= 0){
        system("cls");
        cout << "\n\tERRO: Número de mesas inválido.";
        return 0;
    }

    int matrizLugares[mesas][fileiras];



    do{
        system("cls");
        cout << "\n\t1 - Ocupar mesa\n\t2 - Desocupar a mesa\n\t3 - Ocupar fileira\n\t4 - Desocupar a fileira\n\t5 - Mostrar mapa das mesas\n\t6 - Sair.\n\n\n\tInsira a opção desejada: ";
        cin >> option;



    } while(option != 6);


    return 0;

}
