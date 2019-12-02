#include <iostream>
#include <string.h>

using namespace std;

typedef struct pessoa{
    char nome[100];
    int idade;
    int ano;
    char cpf[20];
}t_pessoa;

int main(){
    //Pode ser um vetor também
    t_pessoa p;

    //p[1] = "nome_da_pessoa"

    //Tem que usar a seta quando é u ponteiro ṕ->idade
    strcpy(p.nome, "marcos");
    p.idade = 26;

    cout << "Nome: " << p.nome << endl;
    cout << "Idade: " << p.idade << endl;

    return 0;
}