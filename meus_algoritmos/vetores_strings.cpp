#include <iostream>
#include <string.h>

using namespace std;

//Metodos da string.h


int main(){
    char nome[] = "marcos";
    char sobrenome[] = "castro";
    

    //Retorna o tamanho da string
    strlen(nome);

    //Verifica se é um caractere alfabético
    isalpha(nome);

    //Verifica se é um digito (ex: 0,1,2,3...)
    isdigit(nome);

    //Verifica se a letra é maiuscula
    isupper(nome);

    //Verifa se a letra é minuscula
    islower(nome);

    //Verifica se é um espaço/tabulação
    isspace(nome);

    //Compara strings (Retorna 0 se forem iguais)
    strcmp(nome, nome2);

    //versão minuscula do caractere
    tolower(nome[0]);

    //versão minuscula do caractere
    toupper(nome[0]);

    //Concatenar
    strcat(nome, sobrenome);
    return 0;
}