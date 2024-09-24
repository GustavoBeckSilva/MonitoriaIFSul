#include <iostream>
#include <ctime>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    srand(time(0));

    int A[10], B[10], C[10], insertedNumber;
    bool repete = false;

    for(int i=0; i<10; i++){

        repete = false;
        insertedNumber = rand() % 10;

        if(i > 0){
            for(int j = i - 1; j >= 0; j--){
                if(insertedNumber == A[j]){
                    repete = true;
                    break;
                }
            }
        }

        if(!repete)
            A[i] = insertedNumber;

        else
            i--;

    }

    for(int i=0; i<10; i++){

        repete = false;
        insertedNumber = rand() % 10;

        if(i > 0){
            for(int j = i - 1; j >= 0; j--){
                if(insertedNumber == B[j]){
                    repete = true;
                    break;
                }
            }
        }

        if(!repete)
            B[i] = insertedNumber;

        else
            i--;

    }

    for(int i=0; i<10; i++){

        if(A[i] == B[i])
            C[i] = A[i];

        else
            C[i] = 0;

    }

    cout << "\n\tVetor A: ";

    for(int i=0; i<10;i++)
        cout << A[i] << " ";

    cout << "\n\tVetor B: ";

    for(int i=0; i<10;i++)
        cout << B[i] << " ";

    cout << "\n\tVetor C: ";

    for(int i=0; i<10;i++)
        cout << C[i] << " ";

    cout << "\n\n";

    return 0;

}
