#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    srand(time(0));

    int matriz[3][3], contador = 0, opc, copia[3][3], coluna, linha;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            matriz[i][j] = ++contador;
        }
    }

    do
    {
        system("cls");
        cout << "\n\t1 - Girar 90º sentido horário\n\t2 - Girar 90º sentido anti-horário\n\t3 - Mostrar matriz\n\t4 - Sair\n\n\n\tInsira qualquer valor para prosseguir: ";
        cin >> opc;

        if(opc < 1 || opc > 4)
        {
            system("cls");
            cout << "\n\tERRO: opção escolhida é inválida.\n\n\tPressione qualquer tecla para continuar: ";
            cin.ignore();
            cin.get();
        }

        else if(opc == 1)
        {
            coluna = 0;
            linha = 0;

            for(int i = 0; i<3; i++)
            {
                for(int j = 2; j>=0; j--)
                {

                    if(coluna > 2) coluna = 0;

                    copia[i][coluna++] = matriz[j][i];
                }
            }

            for(int i=0; i<3; i++)
            {
                for(int j=0; j<3; j++)
                {
                    matriz[i][j] = copia[i][j];
                }
            }
        }

        else if(opc == 2) {

            coluna = 0;
            linha = 0;

            for(int i = 2; i>=0; i--)
            {
                for(int j = 0; j<3; j++)
                {

                    if(linha > 2)linha = 0;
                    if(coluna > 2) coluna = 0;

                    copia[linha][coluna++] = matriz[j][i];
                }
                linha++;
            }

            for(int i=0; i<3; i++)
            {
                for(int j=0; j<3; j++)
                {
                    matriz[i][j] = copia[i][j];
                }
            }

        }

        else if(opc == 3)
        {
            system("cls");

            cout << "\n\tMatriz: \n\n";

            for(int i=0; i<3; i++)
            {
                for(int j=0; j<3; j++)
                {
                    cout << "\t" << matriz[i][j];
                }
                cout << endl;
            }

            cout << "\n\t\n\n\tPressione qualquer tecla para continuar: ";
            cin.ignore();
            cin.get();
        }

        else if(opc == 4)
        {
            system("cls");
            cout << "\n\tPrograma finalizado!\n\n";
        }
    }
    while(opc != 4);

    return 0;
}
