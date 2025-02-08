#include <iostream>
#include <math.h>
using namespace std;
int VerificarParOuImpar(int numero){
    int verificador;
    if(numero%2==0){
    cout<<" Esse numero eh par "<<endl;


    }else{
      cout<<" esse numero eh impar "<<endl;





    }


    return verificador;
}
int VerificaNegativoPositivo(int numero){
    int verificador1;
    if (numero>=0){
        cout<<" esse numero eh positivo "<<endl;

    }else{

        cout<<" esse numero eh negativo "<<endl;
    }



    return verificador1;
}


int main (){

int numero=0;
cout<<" Defina o numero: ";
cin>>numero;


VerificarParOuImpar(numero);

VerificaNegativoPositivo( numero);

 return 0;
}
