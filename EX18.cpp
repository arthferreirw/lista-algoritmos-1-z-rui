#include <iostream>
using namespace std;

int verificaNotaMaior60(int index){
    float nota = 0;
    cout << "Informe a nota "<< index <<": ";
    cin >> nota;

    if(nota > 60) {
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int contador = 0;
    //chama a função para a nota1
    contador = contador + verificaNotaMaior60(1);
    //chama a função para a nota2
    contador = contador + verificaNotaMaior60(2);
    //chama a função para a nota3
    contador = contador + verificaNotaMaior60(3);
    //chama a função para a nota4
    contador = contador + verificaNotaMaior60(4);
    //chama a função para a nota5
    contador = contador + verificaNotaMaior60(4);

    cout << contador << " notas são maiores que 60" << endl;
    return 0;
}