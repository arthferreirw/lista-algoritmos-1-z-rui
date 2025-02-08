#include <iostream>
using namespace std;
int VerificarIdade(int idade ){
   int i;
    if (idade>=18){
         cout<<" pode tirar carteira "<<endl;
       

    }else{
      cout<<" nao pode tirar carteira "<<endl;
       
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