#include <iostream>
using namespace std;
void CalcularCedulas(int notas100, int notas50, int notas20, int notas10, int notas5, int notas1, int valor,int resto){
if(valor>0){

    notas100=valor/100;
    resto=valor % 100;
    cout<<" cedulas de 100: "<<notas100<<endl;

}
if(valor>0){

    notas50=resto/50;
    resto=resto % 50;
    cout<<" cedulas de 50: "<<notas50<<endl;


}
 if(valor>0){

    notas20=valor/20;
    resto=valor % 20;
    cout<<" cedulas de 20: "<<notas20<<endl;



 }
 if (valor>0){
    notas10=valor/10;
    resto=valor % 10;
    cout<<" cedulas de 10: "<<notas10<<endl;


 }

 if(valor>0){

    notas5=valor/5;
    resto=valor % 5;
    cout<<" cedulas de 5: "<<notas5<<endl;

 }


 if(valor>0){

    notas1=valor/1;
    resto=valor % 1;
    cout<<" cedulas de 1: "<<notas1<<endl;

}

}

int main(){

int valor=0;
cout<<" qual eh o seu montante?: ";
cin>>valor;

int notas100;
int notas50;
int notas20;
int notas10;
int notas5;
int notas1;

int resto;

 CalcularCedulas(notas100,notas50, notas20, notas10, notas5,notas1,  valor, resto);





    return 0;
}