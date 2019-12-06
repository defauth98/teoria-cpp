#include <iostream>
#include <string.h>
using namespace std;

//E sempre bom colocar o nome da classe com letra maiuscula
class Pessoa {
    public:
        char nome[100];
        char cpf[20];
        int idade;
};

//função para retornar a idade da pessoa atraves do seu nome 
int getIdade(Pessoa pessoas[], char nome[]){
    int tam = sizeof(pessoas) / sizeof(Pessoa);

    for (int i = 0; i < tam; i++)
    {
        if(strcmp(nome, pessoas[1].nome) == 0){
            return pessoas[i].idade;
        }
    }
    return -1;
}

int main(){
    //Uma instancia de uma classe é um objeto
    /*
    Pessoa p1;
    */

    //Uma clase quando incializado pode ser inicializada
    /*
    Pessoa p1 = {"Joao", "1111111",30};
    */

    //Acessando dados
    /*
    strcpy(p1.nome, "joao");
    strcpy(p1.cpf, "121321321");
    p1.idade = 30;
    */

    //Pode ser um vetor de objetos
    Pessoa pessoas[3] = {
        {"João","1111111111",30},
        {"maria","1111111111",20},
        {"Pedro","1111111111",50},
    };

    cout << "Nome: " << pessoas[0].nome << endl;
    cout << "CPF: " << pessoas[0].cpf << endl;
    cout << "Idade: " << pessoas[0].idade << endl;

    return 0;
}