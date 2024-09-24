#include <iostream>

using namespace std;

int main()
{

    setlocale(LC_ALL, "portuguese");

    int n;

    cout << "\n\tInsira um valor N para a dimensão da matriz: ";
    cin >> n;

    if(n < 2)
    {
        system("cls");
        cout << "\n\tERRO: valor menor do que 2.\n\n";
        return 0;
    }

    int mat[n][n], copia[n][n], contador = 0, opc = 0, linha = 0, coluna = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            mat[i][j] = ++contador;
        }
    }

    do
    {
        system("cls");
        cout << "\n\t1 - Mover a matriz para a esquerda\n\t2 - Mover a matriz para a direita\n\t3 - Mover a matriz para cima\n\t4 - Mover a matriz para baixo\n\t5 - Exibir a matriz atual\n\t6 - Sair\n\n\tInsira qualquer opção para continuar: ";
        cin >> opc;

        if(opc < 1 || opc > 6)
        {
            system("cls");
            cout << "\n\tERRO: opção selecionada inexistente!\n\n\n\tInsira qualquer valor para prosseguir: ";
            cin.ignore();
            cin.get();
        }

        else if(opc == 1)
        {

            linha = 0;
            coluna = 0;

            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < n; j++)
                {

                    if(coluna == n - 1)
                        copia[linha][coluna] = mat[i][0];

                    else
                        copia[linha][coluna] = mat[i][j + 1];

                    coluna++;

                    if(coluna > n - 1) coluna = 0;

                }

                linha++;

                if(linha > n - 1) linha = 0;
            }

            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    mat[i][j] = copia[i][j];
                }
            }
        }

        else if(opc == 2)
        {

            linha = 0;
            coluna = 0;

            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < n; j++)
                {

                    if(coluna == 0)
                        copia[linha][coluna] = mat[i][n - 1];

                    else
                        copia[linha][coluna] = mat[i][j - 1];

                    coluna++;

                    if(coluna > n - 1) coluna = 0;

                }

                linha++;

                if(linha > n - 1) linha = 0;
            }

            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    mat[i][j] = copia[i][j];
                }
            }
        }

        else if(opc == 3)
        {

            linha = 0;
            coluna = 0;

            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < n; j++)
                {

                    if(linha == n - 1)
                        copia[linha][coluna] = mat[0][j];

                    else
                        copia[linha][coluna] = mat[i + 1][j];

                    coluna++;

                    if(coluna > n - 1) coluna = 0;

                }

                linha++;

                if(linha > n - 1) linha = 0;
            }

            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    mat[i][j] = copia[i][j];
                }
            }

        }

        else if(opc == 4)
        {

            linha = 0;
            coluna = 0;

            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < n; j++)
                {

                    if(linha == 0)
                        copia[linha][coluna] = mat[n - 1][j];

                    else
                        copia[linha][coluna] = mat[i - 1][j];

                    coluna++;

                    if(coluna > n - 1) coluna = 0;

                }

                linha++;

                if(linha > n - 1) linha = 0;
            }

            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    mat[i][j] = copia[i][j];
                }
            }


        }

        else if(opc == 5)
        {

            system("cls");
            cout << "\n\tMatriz original: \n\n";

            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    cout << "\t" << mat[i][j];
                }
                cout << endl;
            }

            cout << "\n\n\tInsira qualquer valor para prosseguir: ";
            cin.ignore();
            cin.get();

        }

        else if(opc == 6)
        {

            system("cls");
            cout << "\n\tAVISO: você encerrou o programa!\n\n";

        }

    }
    while(opc != 6);

    return 0;

}
