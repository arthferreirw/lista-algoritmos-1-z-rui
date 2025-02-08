#include <iostream>
using namespace std;
int VerificarIdade(int idade ){
    int falta=0;
   int i;
    if (idade>=18){
         cout<<" pode tirar carteira "<<endl;
       

    }else{
      cout<<" nao pode tirar carteira "<<endl;
       falta=18-idade;

       cout<<" faltam "<<falta<<" anos para voce poder tirar a cateira "<<endl;
    }  
     
   return i;
}

int main (){
int idade=0;


cout<<" Idade (anos): ";
cin>>idade;


VerificarIdade( idade );


    return 0;
}