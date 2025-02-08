#include <iostream>
using namespace std;
float CardapioLanchonete(float quantidade, float codigo, float valorpago){
    if(codigo==100){

    cout<<" Cachorro-quente "<<endl;
    valorpago=quantidade*2.20;

    return valorpago;

    }else if(codigo==101){

    cout<<" Bauru Simples "<<endl;
    valorpago=quantidade*3.30;

    return valorpago;

    }else if(codigo==102){

    cout<<" Bauru com ovo "<<endl;
    valorpago=quantidade*3.5;

    return valorpago;

    }else if(codigo==103){

    cout<<" Hamuburguer "<<endl;

    valorpago=quantidade*5.2;

    return valorpago;

    }else if(codigo==104){

    cout<<" Cheeseburguer "<<endl;

    valorpago=quantidade*7.3;

    return valorpago;

    }else if(codigo==105){

    cout<<" refrigerante "<<endl;

    valorpago=quantidade*2;

    return valorpago;

    }



    
}
int main(){

    float codigo=0;
    cout<<" Informe o codigo do produto (100-105): ";
    cin>>codigo;


    float quantidade=0;
    cout<<" informe a quantidade: ";
    cin>>quantidade;
    
    float valorpago;

   cout<<"o valor pago eh: " <<CardapioLanchonete( quantidade, codigo, valorpago)<<" reais "<<endl;







    return 0;
}

