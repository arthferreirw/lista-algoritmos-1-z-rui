#include <iostream>
using namespace std;
float CalcularAumentoSalarial(float codigo, float salarioantigo, float salarionovo, float diferenca){
    if(codigo==101){

    cout<<" CARGO: GERENTE "<<endl;

    salarionovo=salarioantigo*1.1;

    cout<<" o seu salario antigo eh: "<<salarioantigo<<endl;

    cout<<" o seu salario novo eh: "<<salarionovo<<endl;

    diferenca=salarionovo-salarioantigo;

    cout<<" a diferenca eh: "<<diferenca<<endl;

    return salarionovo;

    }else if(codigo==102){
    cout<<" CARGO: ENGENHEIRO "<<endl;

    salarionovo=salarioantigo*1.2;

    cout<<" o seu salario antigo eh: "<<salarioantigo<<endl;

    cout<<" o seu salario novo eh: "<<salarionovo<<endl;

    diferenca=salarionovo-salarioantigo;

    cout<<" a diferenca eh: "<<diferenca<<endl;

    return salarionovo;


    }else if(codigo==103){
    cout<<" CARGO: TECNICO "<<endl;  

    salarionovo=salarioantigo*1.3; 

    cout<<" o seu salario antigo eh: "<<salarioantigo<<endl;

    cout<<" o seu salario novo eh: "<<salarionovo<<endl;

    diferenca=salarionovo-salarioantigo;

    cout<<" a diferenca eh: "<<diferenca<<endl;

    return salarionovo;


    }else if(codigo==100){
    cout<<" CARGO: OUTRO "<<endl; 

    salarionovo=salarioantigo*1.4;

    cout<<" o seu salario antigo eh: "<<salarioantigo<<endl;

    cout<<" o seu salario novo eh: "<<salarionovo<<endl;

    diferenca=salarionovo-salarioantigo;

    cout<<" a diferenca eh: "<<diferenca<<endl;   

    return salarionovo;

    }






}int main(){

cout<<" CODIGO-----CARGO "<<endl;
cout<<" 102 - - - - GERENTE "<<endl;
cout<<" 103 - - - - ENGENHEIRO "<<endl;
cout<<" 100 - - - - OUTRO CARGO "<<endl;

float salarioantigo=0;
cout<<" digite o seu atual salario: ";
cin>>salarioantigo;

float codigo;
cout<<" qual eh o codigo do seu cargo?: ";
cin>>codigo;

float salarionovo;
float diferenca;

CalcularAumentoSalarial( codigo, salarioantigo, salarionovo, diferenca);











    return 0;
}