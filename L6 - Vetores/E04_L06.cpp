#include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    int fileiraUm[5], fileiraDois[5], fileiraTres[5], fileiraQuatro[5], fileiraCinco[5];
    bool repeteID = false;

    for(int i=0; i<25; i++){

        system("cls");

        if(i <= 4){
            do{
                repeteID = false;
                cout << "\n\tChamada! Aluno " << i << "? (Presente - C�digo do aluno | Ausente - Zero)";
                cin >> fileiraUm[i];

                if(i > 0){
                    for(int j = i - 1; j >=0; j++){
                        if(fileiraUm[j] == fileiraUm[i]){
                            repeteID = true;
                            break;
                        }
                    }
                }

            } while(repeteID);
        }

        else if(i > 4 && i <= 9){
            cout << "\n\tChamada! Aluno " << i << "? (Presente - C�digo do aluno | Ausente - Zero)";
            cin >> fileiraUm[i - 5];

            /// vereficar se codigo � repetido ou inv�lido
        }

        else if(i > 9 && i <= 14){
            cout << "\n\tChamada! Aluno " << i << "? (Presente - C�digo do aluno | Ausente - Zero)";
            cin >> fileiraUm[i - 10];

            /// vereficar se codigo � repetido
        }

        else if(i > 14 && i <= 19){
            cout << "\n\tChamada! Aluno " << i << "? (Presente - C�digo do aluno | Ausente - Zero)";
            cin >> fileiraUm[i - 15];

            /// vereficar se codigo � repetido
        }

        else if(i > 19 && i <= 24){
            cout << "\n\tChamada! Aluno " << i << "? (Presente - C�digo do aluno | Ausente - Zero)";
            cin >> fileiraUm[i - 20];

            /// vereficar se codigo � repetido
        }

    }


    return 0;

}

/*
Antes de iniciar essas opera��es, o professor faz a chamada da turma de uma forma diferente: ele olha as fileiras uma a uma.
Caso o lugar esteja preenchido, o professor insere o c�digo do aluno (um n�mero entre 1 e 20). Caso o lugar esteja vazio,
o valor 0 � inserido.
Ap�s a chamada, o programa deve exibir as seguintes op��es de menu:
Ver Faltas
Organizar Fileiras por C�digo Crescente
Organizar Fileiras por C�digo Decrescente
Mover Fileira
Liberar Fileira
Juntar alunos
Sair
*/
