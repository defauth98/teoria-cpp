#include <iostream>

using namespace std;

//Variavel de escopo global 
int num_global = 12;

void foo(){
    //Variavel de escopo local
    int num = 10;
    //Quando uma variavel é estática, a declaração da variavel é feita pela primeira
    //vez, tal que a varivel estática mantem seu valor
    static int num_static = 1;

    cout << num << endl;

    //Quando é uma variavel global, qualquer função pode ter acesso a ela
    cout << num_global << endl;

}

int main(){
    cout << num_global << endl;

    foo();

    return 0;
}