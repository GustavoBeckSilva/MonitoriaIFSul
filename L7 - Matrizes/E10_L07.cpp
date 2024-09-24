#include <iostream>

using namespace std;

int main()
{

    setlocale(LC_ALL, "portuguese");

    int linhas, colunas;

    cout << "\n\tInsira a quantia de linhas da matriz: ";
    cin >> linhas;
    cout << "\tInsira a quantia de colunas da matriz: ";
    cin >> colunas;

    if(linhas < 2 || colunas < 2){
        system("cls");
        cout << "\n\tERRO: número de linhas ou colunas é inválido!\n\n\n";
        return 0;
    }

    int matriz[linhas][colunas];

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            system("cls");
            cout << "\n\tInsira um valor para preencher a matriz: ";
            cin >> matriz[i][j];
        }
    }

    bool isHomogenea = true;

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            if(i + 1 < linhas && j + 1 < colunas){
                if(matriz[i][j] != matriz[i + 1][j + 1]){
                    isHomogenea = false;
                    break;
                }
            }
        }
    }

    system("cls");

    if(isHomogenea)
        cout << "\n\tÉ homogênea!!!\n\n";

    else
        cout << "\n\tNão é homogênea.\n\n";



}
