#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    srand(time(0));

    int sudoku[9][9] = {0}, sorteado = 0;
    bool repetido = false;

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){

            repetido = false;
            sorteado = rand() % 9 + 1;

            if(i == 0 && j == 0)
                sudoku[i][j] = sorteado;

            else if(i == 0 && j > 0){

                for(int J = j - 1; J >= 0; J--){
                    if(sorteado == sudoku[0][J]){
                        repetido = true;
                        break;
                    }
                }

                if(repetido)
                    j--;

                else
                    sudoku[i][j] = sorteado;

            }

            else if(i > 0 && j == 0){


                for(int I = i - 1; I >= 0; I--){
                    if(sorteado == sudoku[I][j]){
                        repetido = true;
                        break;
                    }
                }

                if(repetido)
                    j--;

                else
                    sudoku[i][j] = sorteado;
                /// conferir se as linhas anteriores tem o mesmo elemento
                    // se sim, j--
                    // se não, atribui valor
            }

            else{/*

                for(int J = j - 1; J >= 0; J--){
                    if(sorteado == sudoku[i][J]){
                        repetido = true;
                        break;
                    }
                }



                for(int I = i - 1; I >= 0; I--){
                        if(sorteado == sudoku[I][j]){
                            repetido = true;
                            break;
                        }
                    }*/

              //  if(repetido)
             //       j--;

              //  else*/A
                    sudoku[i][j] = sorteado;



            }


        }
    }

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cout << "\t" << sudoku[i][j];
        }
            cout << endl;
    }


}

