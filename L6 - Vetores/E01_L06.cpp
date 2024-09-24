#include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    int tamanhoVetor;

    cout << "\n\tInsira o tamanho do vetor: ";
    cin >> tamanhoVetor;

    if(tamanhoVetor < 2){
        system("cls");
        cout << "\n\tERRO: dimensão do vetor inválida.\n\n\tInsira qualquer valor para prosseguir: ";
        cin.ignore();
        cin.get();
        return 0;
    }

    int vetor[tamanhoVetor];

    for(int i=0; i<tamanhoVetor; i++)
        vetor[i] = i + 1;

    int option;

    do{

        system("cls");
        cout << "\n\t1 - Mover o vetor para a esquerda\n\t2 - Mover o vetor para a direita\n\t3 - Exibir o vetor atual\n\t4 - Sair\n\n\n\tInsira a opção desejada: ";
        cin >> option;

        if(option == 1){

            system("cls");

            int firstPosition;

            firstPosition = vetor[0];

            for(int i = 0; i < tamanhoVetor; i++){

                if(i == tamanhoVetor - 1)
                    vetor[i] = firstPosition;

                else
                    vetor[i] = vetor[i+1];

            }

            cout << "\n\tVetor movido para esquerda!\n\n\tInsira qualquer valor para prosseguir: ";
            cin.ignore();
            cin.get();

        }

        else if(option == 2){

            system("cls");

            int lastPosition;

            lastPosition = vetor[tamanhoVetor - 1];

            for(int i = tamanhoVetor - 1; i > -1; i--){

                if(i == 0)
                    vetor[i] = lastPosition;

                else
                    vetor[i] = vetor[i - 1];

            }

            cout << "\n\tVetor movido para direita!\n\n\tInsira qualquer valor para prosseguir: ";
            cin.ignore();
            cin.get();

        }

        else if(option == 3){

            system("cls");

            cout << "\n\tVetor: ";

            for(int i = 0; i < tamanhoVetor; i++)
                cout << vetor[i] << " ";

            cout << "\n\n\n\tInsira qualquer valor para prosseguir: ";
            cin.ignore();
            cin.get();

        }

        else if(option == 4){
            system("cls");
            cout << "\n\tAVISO: você encerrou o sistema.\n\n";
        }

        else{
            system("cls");
            cout << "\n\tERRO: opção inexistente.\n\n\tInsira qualquer valor para prosseguir: ";
            cin.ignore();
            cin.get();
        }

    } while(option != 4);

    return 0;

}
