//Algoritmo de organização bubble sort
#include <iostream>
#define MAX 10
using namespace std;

class Carro{
    public:
        char nome[100];
        char cor[20];
        char placa[20];
        double preco;
};


int main(int argc, char *argv[]){
    Carro carros[MAX];
    int i=0,tam;

    while (true){
        char resp[5];

        cout << "Digite o nome do carro: ";
        cin >> carros[i].nome;
        
        cout << "Digite o preco: ";
        cin >> carros[i].preco;

        cout << "Você deseja continuar ? <'S'>SIM <'N'>NAO ";
        cin >> resp;

        if(resp != "S") 
            break;

        cout << endl;
        i++;
    }
    tam = i;
    cout << endl;

    for (int j = 0; j == i ; j++)
    {
        cout << "Nome do carro: " << carros[j].nome << endl;
        cout << "Preço: R$" << carros[j].preco;
        cout << endl;
    }
    
    
    return 0;
}