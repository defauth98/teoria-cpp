// Vetores ou arrays
#include <iostream>

using namespace std;

int main(){
    //Declarando um vetor:

    int vetor[100];

    //Inicializando o vetor
    for(int i = 0; i < 100; i++)
        vetor[i] = i;

    for(int i = 0; i < 100; i++)
        cout << vetor[i] << endl;

    //Tamanho do vetor (Em bits)
    sizeof(vetor);
    return 0;
}