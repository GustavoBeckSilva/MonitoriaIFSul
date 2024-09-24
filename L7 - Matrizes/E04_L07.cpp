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

    int matriz[N][N];
    bool usados[N*N] = {false};

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            bool numeroValido = false;
            int nGerado;

            while (!numeroValido) {
                nGerado = rand() % (N * N);

                if (!usados[nGerado]) {
                    if (((i + j) % 2 == 0 && nGerado % 2 == 0) || ((i + j) % 2 != 0 && nGerado % 2 != 0)) {
                        matriz[i][j] = nGerado;
                        usados[nGerado] = true;
                        numeroValido = true;
                    }
                }
            }
        }
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout << "\t" << matriz[i][j];
        }
        cout << endl;
    }

    return 0;
}
