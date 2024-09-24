#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char jogo[3][3];
    bool vezX = true;
    int linha, coluna;
    bool repeteLoop = false;
    int jogarNovamente = 1;
    char vencedor = ' ';
    bool reseta = true;

    while (jogarNovamente == 1)
    {
        if (reseta == true)
        {

            cout << endl;

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    jogo[i][j] = '-';
                }
            }

            vezX = true;
            repeteLoop = false;
            vencedor = ' ';
            reseta = false;
        }

        do
        {
            system("cls");
            repeteLoop = false;

            if (vezX)
                cout << "\n\tVez do jogador X\n\n";
            else
                cout << "\n\tVez do jogador O\n\n";

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << "\t" << jogo[i][j];
                }
                cout << endl;
            }

            cout << "\n\n\tInsira a linha: ";
            cin >> linha;
            cout << "\n\tInsira a coluna: ";
            cin >> coluna;

            if (linha < 1 || linha > 3 || coluna < 1 || coluna > 3)
            {
                system("cls");
                repeteLoop = true;
                cout << "\n\n\tERRO: algum valor inserido é inválido.\n\n\tPressione qualquer tecla: ";
                cin.ignore();
                cin.get();
            }
            else if (jogo[linha - 1][coluna - 1] != '-')
            {
                system("cls");
                repeteLoop = true;
                cout << "\n\n\tERRO: posição já ocupada.\n\n\tPressione qualquer tecla: ";
                cin.ignore();
                cin.get();
            }
            else
            {

                if (vezX)
                {
                    jogo[linha - 1][coluna - 1] = 'X';
                    vezX = false;
                }
                else
                {
                    jogo[linha - 1][coluna - 1] = 'O';
                    vezX = true;
                }


                for (int i = 0; i < 3; i++)
                {
                    if ((jogo[i][0] == jogo[i][1] && jogo[i][1] == jogo[i][2] && jogo[i][0] != '-'))
                        vencedor = jogo[i][0];
                    if ((jogo[0][i] == jogo[1][i] && jogo[1][i] == jogo[2][i] && jogo[0][i] != '-'))
                        vencedor = jogo[0][i];
                }


                if ((jogo[0][0] == jogo[1][1] && jogo[1][1] == jogo[2][2] && jogo[0][0] != '-'))
                    vencedor = jogo[0][0];
                if ((jogo[0][2] == jogo[1][1] && jogo[1][1] == jogo[2][0] && jogo[0][2] != '-'))
                    vencedor = jogo[0][2];

                bool empate = true;

                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        if (jogo[i][j] == '-')
                            empate = false;
                    }
                }
                if (empate && vencedor == ' ')
                    vencedor = '-';
            }

        } while (repeteLoop);

        if (vencedor != ' ')
        {
            system("cls");

            cout << endl;

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << "\t" << jogo[i][j];
                }
                cout << endl;
            }

            if (vencedor == 'X')
                cout << "\n\n\tJogador X venceu!!!";
            else if (vencedor == 'O')
                cout << "\n\n\tJogador O venceu!!!";
            else if (vencedor == '-')
                cout << "\n\n\tO jogo empatou!!!";

            cout << "\n\n\tPressione 1 para reiniciar ou qualquer outra tecla para finalizar: ";
            cin >> jogarNovamente;

            if (jogarNovamente == 1)
                reseta = true;
        }
    }

    return 0;
}
