#include <iostream>

using namespace std;

//Podem conter metodos
struct Pessoa {
    private:
    int idade;

    //Construtor
    /*
    Pessoa (int idade){
        this->idade = idade;
    }
    */

    //Pode ter outros construtores

    //Metodo
    /*
    void setIdade(int idade){
        this->idade = idade;
    }

    int getIdade(){
        return idade;
    }
    */
};

int main(){
    //Em C
    //struct pessoa p;

    //Em c++
    Pessoa p;

    return 0;
}