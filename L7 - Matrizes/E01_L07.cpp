#include <iostream>

using namespace std;

int main()
{

    setlocale(LC_ALL, "portuguese");

    int fileiras, mesas, option;

    cout << "\n\tInsira a quantidade de fileiras: ";
    cin >> fileiras;

    if(fileiras <= 0)
    {
        system("cls");
        cout << "\n\tERRO: Número de fileiras inválido.";
        return 0;
    }

    cout << "\tInsira a quantidade de mesas nas fileiras: ";
    cin >> mesas;

    if(mesas <= 0)
    {
        system("cls");
        cout << "\n\tERRO: Número de mesas inválido.";
        return 0;
    }

    int matrizLugares[mesas][fileiras];

    for(int i=0; i<mesas; i++)
    {
        for(int j=0; j<fileiras; j++)
        {
            matrizLugares[i][j] = 0;
        }
    }

    do
    {
        system("cls");
        cout << "\n\t1 - Ocupar mesa\n\t2 - Desocupar a mesa\n\t3 - Ocupar fileira\n\t4 - Desocupar a fileira\n\t5 - Mostrar mapa das mesas\n\t6 - Sair\n\n\n\tInsira a opção desejada: ";
        cin >> option;

        if(option < 1 || option > 6)
        {
            system("cls");
            cout << "\n\tERRO: Opção escolhida inválida.";
        }

        else if(option == 1)
        {

            system("cls");

            bool lugaresDisponiveis = false;

            for(int i=0; i<mesas; i++)
            {
                for(int j=0; j<fileiras; j++)
                {
                    if(matrizLugares[i][j] == 0)
                    {
                        lugaresDisponiveis = true;
                        break;
                    }
                }
            }

            if(lugaresDisponiveis)
            {

                int fileiraDesejada, mesaDesejada;

                cout << "\n\tInsira a fileira da mesa a ser ocupada: ";
                cin >> fileiraDesejada;

                if(fileiraDesejada < 1 || fileiraDesejada > fileiras)
                {
                    system("Cls");
                    cout << "\n\tERRO: Fileira inserida é inválida.\n\n\tInsira qualquer valor para continuar: ";
                    cin.ignore();
                    cin.get();
                }

                else
                {
                    system("cls");
                    cout << "\n\tInsira a mesa da fileira a ser ocupada: ";
                    cin >> mesaDesejada;

                    if(mesaDesejada < 1 || mesaDesejada > mesas)
                    {
                        system("Cls");
                        cout << "\n\tERRO: Mesa inserida é inválida.\n\n\tInsira qualquer valor para continuar: ";
                        cin.ignore();
                        cin.get();
                    }

                    else
                    {

                        if(matrizLugares[mesaDesejada - 1][fileiraDesejada - 1] == 0)
                            matrizLugares[mesaDesejada - 1][fileiraDesejada - 1] = 1;

                        else
                        {
                            system("cls");
                            cout << "\n\tAVISO: Esse lugar está ocupado!\n\n\tInsira qualquer valor para prosseguir: ";
                            cin.ignore();
                            cin.get();
                        }

                    }
                }
            }

            else
            {
                system("cls");
                cout << "\n\tAVISO: Não há lugares disponíveis!\n\n\tInsira qualquer valor para prosseguir: ";
                cin.ignore();
                cin.get();
            }
        }

        else if(option == 2)
        {
            system("cls");

            bool lugaresDisponiveis = false;

            for(int i=0; i<mesas; i++)
            {
                for(int j=0; j<fileiras; j++)
                {
                    if(matrizLugares[i][j] == 0)
                    {
                        lugaresDisponiveis = true;
                        break;
                    }
                }
            }

            if(lugaresDisponiveis)
            {

                int fileiraDesejada, mesaDesejada;

                cout << "\n\tInsira a fileira da mesa a ser ocupada: ";
                cin >> fileiraDesejada;

                if(fileiraDesejada < 1 || fileiraDesejada > fileiras)
                {
                    system("Cls");
                    cout << "\n\tERRO: Fileira inserida é inválida.\n\n\tInsira qualquer valor para continuar: ";
                    cin.ignore();
                    cin.get();
                }

                else
                {
                    system("cls");
                    cout << "\n\tInsira a mesa da fileira a ser ocupada: ";
                    cin >> mesaDesejada;

                    if(mesaDesejada < 1 || mesaDesejada > mesas)
                    {
                        system("Cls");
                        cout << "\n\tERRO: Mesa inserida é inválida.\n\n\tInsira qualquer valor para continuar: ";
                        cin.ignore();
                        cin.get();
                    }

                    else
                    {

                        if(matrizLugares[mesaDesejada - 1][fileiraDesejada - 1] == 1)
                            matrizLugares[mesaDesejada - 1][fileiraDesejada - 1] = 0;

                        else
                        {
                            system("cls");
                            cout << "\n\tAVISO: Esse lugar já está vazio!\n\n\tInsira qualquer valor para prosseguir: ";
                            cin.ignore();
                            cin.get();
                        }

                    }
                }
            }

            else
            {
                system("cls");
                cout << "\n\tAVISO: Todas as mesas estão vazias!\n\n\tInsira qualquer valor para prosseguir: ";
                cin.ignore();
                cin.get();
            }
        }

        else if(option == 3)
        {

            system("cls");

            bool lugaresDisponiveis = false;

            for(int i=0; i<mesas; i++)
            {
                for(int j=0; j<fileiras; j++)
                {
                    if(matrizLugares[i][j] == 0)
                    {
                        lugaresDisponiveis = true;
                        break;
                    }
                }
            }

            if(lugaresDisponiveis)
            {

                int fileiraDesejada, mesaDesejada;

                cout << "\n\tInsira a fileira da mesa a ser ocupada: ";
                cin >> fileiraDesejada;

                if(fileiraDesejada < 1 || fileiraDesejada > fileiras)
                {
                    system("Cls");
                    cout << "\n\tERRO: Fileira inserida é inválida.\n\n\tInsira qualquer valor para continuar: ";
                    cin.ignore();
                    cin.get();
                }

                else
                {

                    for(int i=0; i<fileiras; i++)
                    {
                        if(matrizLugares[i][fileiraDesejada - 1] == 1)
                        {
                            lugaresDisponiveis = false;
                            break;
                        }
                    }

                    if(lugaresDisponiveis)
                    {
                        for(int i=0; i<fileiras; i++)
                        {
                            matrizLugares[i][fileiraDesejada - 1] = 1;
                        }
                    }

                    else
                    {
                        system("cls");
                        cout << "\n\tAVISO: A fileira já tem mesas ocupadas!\n\n\tInsira qualquer valor para prosseguir: ";
                        cin.ignore();
                        cin.get();
                    }
                }
            }

            else
            {
                system("cls");
                cout << "\n\tAVISO: Não há lugares disponíveis!\n\n\tInsira qualquer valor para prosseguir: ";
                cin.ignore();
                cin.get();
            }
        }

        else if(option == 4)
        {
            system("cls");

            bool lugaresDisponiveis = false;

            for(int i=0; i<mesas; i++)
            {
                for(int j=0; j<fileiras; j++)
                {
                    if(matrizLugares[i][j] == 0)
                    {
                        lugaresDisponiveis = true;
                        break;
                    }
                }
            }

            if(lugaresDisponiveis)
            {

                int fileiraDesejada, mesaDesejada;

                cout << "\n\tInsira a fileira da mesa a ser desocupada: ";
                cin >> fileiraDesejada;

                if(fileiraDesejada < 1 || fileiraDesejada > fileiras)
                {
                    system("Cls");
                    cout << "\n\tERRO: Fileira inserida é inválida.\n\n\tInsira qualquer valor para continuar: ";
                    cin.ignore();
                    cin.get();
                }

                else
                {

                    if(lugaresDisponiveis)
                    {
                        for(int i=0; i<fileiras; i++)
                        {
                            matrizLugares[i][fileiraDesejada - 1] = 0;
                        }
                    }


                }
            }

            else
            {
                system("cls");
                cout << "\n\tAVISO: Todos os lugares já estão desocupados!\n\n\tInsira qualquer valor para prosseguir: ";
                cin.ignore();
                cin.get();
            }
        }

        else if(option == 5)
        {

            system("cls");
            cout << "\n\tLugares ocupados (1) e desocupados (0):\n\n";

            for(int i=0; i<mesas; i++)
            {
                for(int j=0; j<fileiras; j++)
                {
                    cout << "\t" << matrizLugares[i][j] << " ";
                }
                cout << endl;
            }

            cout << "\n\tInsira qualquer valor para prosseguir: ";
            cin.ignore();
            cin.get();

        }

        else if(option == 6)
        {
            system("cls");
            cout << "\n\tAVISO: Você fechou o menu.\n\n";
        }

    }
    while(option != 6);


    return 0;

}
