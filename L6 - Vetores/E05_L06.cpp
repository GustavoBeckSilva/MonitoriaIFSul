#include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    int qttAlunos, qttAvaliacoes;

    cout << "\n\tInsira a quantidade de alunos na turma: ";
    cin >> qttAlunos;

    if(qttAlunos < 0){
        system("cls");
        cout << "\n\tERRO: quantidade de alunos inserida é inválida.\n\n";
        return 0;
    }

    cout << "\tInsira a quantidade de avaliações feitas no período: ";
    cin >> qttAvaliacoes;

    if(qttAvaliacoes < 0){
        system("cls");
        cout << "\n\tERRO: quantidade de avaliações inserida é inválida.\n\n";
        return 0;
    }

    int pesosAvaliacoes[qttAvaliacoes];

    for(int i = 0; i < qttAvaliacoes; i++){
        cout << "\tPeso avaliação " << i + 1 << ": ";
        cin >> pesosAvaliacoes[i];

        if(pesosAvaliacoes[i] < 0 || > 10)

    }



    return 0;

}

