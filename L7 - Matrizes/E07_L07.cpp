#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    srand(time(0));

    int matrizUm[5][5], matrizDois[5][5], matrizTres[5][5], linha = 0, coluna = 0;

    bool repete = false;

    for(int i=0; i<5;i++){
        for(int j=0; j<5; j++){
            matrizUm[i][j] = rand() % 24 + 1;
            matrizDois[i][j] = rand() % 24 + 1;
        }
    }

    for(int i=0; i<5;i++){

        for(int j=0; j<5; j++){

            if(matrizUm[i][j] == matrizDois[i][j])
                matrizTres[i][j] = matrizUm[i][j];

            else
                matrizTres[i][j] = 0;

            if(coluna >=4)
                coluna = 0;

            else
                coluna++;

        }

        if(linha >= 4)
            linha = 0;

        else
            linha++;

    }

    cout << "\n\tMatriz 1: \n\n";

    for(int i=0; i<5;i++){
        for(int j=0; j<5; j++){
            cout << "\t" << matrizUm[i][j];
        }
        cout << endl;
    }

    cout << "\n\tMatriz 2: \n\n";

    for(int i=0; i<5;i++){
        for(int j=0; j<5; j++){
            cout << "\t" << matrizDois[i][j];
        }
        cout << endl;
    }

    cout << "\n\tMatriz 3: \n\n";

    for(int i=0; i<5;i++){
        for(int j=0; j<5; j++){
            cout << "\t" << matrizTres[i][j];
        }
        cout << endl;
    }


}
