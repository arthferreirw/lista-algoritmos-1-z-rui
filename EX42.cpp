//resolvi o algoritmo sem utilizar case e switch


#include <iostream>
using namespace std;
float CalcularSaldoMedio(float saldm, float valorfinal){
    if(saldm>=0 && saldm<=200){

    cout<<" Nenhum "<<endl;

    valorfinal=saldm;
    cout<<" o valor final eh: "<<valorfinal<<endl;

    return valorfinal;

    }else if(saldm>201 && saldm <=400){

    cout<<" 20'%' de saldo ";

    valorfinal=saldm*0.2;
    cout<<" o valor final eh: "<<valorfinal<<endl;

    return valorfinal;

    }else if(saldm>401 && saldm <=600){

    cout<<" 30 '%' de saldo"<<endl;
    valorfinal=saldm*0.3;
    cout<<" o valor final eh: "<<valorfinal<<endl;

   
    return valorfinal;

    }else if(saldm>=601){

    cout<<" 40 '%' de saldo"<<endl;
    valorfinal=saldm*0.4;
    cout<<" o valor final eh: "<<valorfinal<<endl;

   
    return valorfinal;

    }




    }
int main(){

float saldm=0;
cout<<" informe o seu saldo medio: ";
cin>>saldm;

float valorfinal;

CalcularSaldoMedio( saldm,valorfinal);



}





