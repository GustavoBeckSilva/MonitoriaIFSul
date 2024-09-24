#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    srand(time(0));

    int N;

    cout << "\n\tInsira um número N para ser a dimensão da matriz: ";
    cin >> N;

    if(N < 2 || N > 10){
        cout << "\n\tERRO: dimensão da matriz é inválida.\n\n";
        return 0;
    }

    int matriz[N][N], contador = 10;

    system("cls");
    cout << "\n\tMatriz original: \n\n";

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            matriz[i][j] = contador;
            contador += 10;
            cout << "\t" << matriz[i][j];
        }
        cout << endl;
    }

    cout << "\n\n\tMatriz rotacionada: \n\n";

    int copia[N][N], coluna = 0, linha = 0;

    for(int i = 0; i<N; i++){
        for(int j=N - 1; j>=0; j--){

            if(coluna > N - 1) coluna = 0;

            copia[i][coluna++] = matriz[j][i];
        }
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            matriz[i][j] = copia[i][j];
            cout << "\t" << matriz[i][j];
        }
        cout << endl;
    }

    return 0;
}
