#include <iostream>
#include <ctime>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    srand(time(0));

    int N;

    cout << "\n\tInsira o valor de N: ";
    cin >> N;

    if(N < 1){
        system("cls");
        cout << "\n\tERRO: dimensão da matriz é inválida.\n\n";
        return 0;
    }

    int alunos[N][N], sorteados[N*N], auxiliar = 0;

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            alunos[i][j] = ++auxiliar;
        }
    }

    for(int i=0; i<N*N; i++){

        sorteados[i] = rand() % (N*N) + 1;

        if(i > 0){
            for(int j = i-1; j>=0; j--){
                if(sorteados[i] == sorteados[j]){
                    i--;
                    break;
                }
            }
        }

    }

    auxiliar = 0;

    while(true){

        system("cls");

        cout << "\n\tPressione qualquer tecla para sortear um número: ";
        cin.ignore();
        cin.get();

        cout << "\n\n\tMatriz antes do sorteio: \n\n";

        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                cout << "\t" << alunos[i][j];
            }
            cout << endl;
        }

        cout << "\n\n\tMatriz depois do sorteio: \n\n";

        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){

                if(sorteados[auxiliar] == alunos[i][j])
                    alunos[i][j] = 0;

                cout << "\t" << alunos[i][j];
            }
            cout << endl;
        }

        cout << "\n\n\tNúmero sorteado: " << sorteados[auxiliar++];
        cout << "\n\n\tInsira qualquer valor para prosseguir: ";
        cin.ignore();
        cin.get();

        if(auxiliar == N*N){
            system("cls");
            cout << "\n\n\tFim do sorteio! Todos sorteados!!!\n\n\t";
            return 0;
        }

    }

}

