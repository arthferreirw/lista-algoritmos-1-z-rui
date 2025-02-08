#include <iostream>
#include <math.h>
using namespace std;
int VerificaParOuImpar(int numero){
      int verificador;
      if(numero%2==0){
      
       cout<<" Esse numero eh par "<<endl;


      }else{
        
        cout<<" Esse numero eh impar "<<endl;



      }




    return verificador;
}

int main (){

  int numero=0;
  cout<<" informe um numero: ";
  cin>>numero;

  VerificaParOuImpar(numero);
  



    return 0;
}