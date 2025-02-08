#include <iostream>
using namespace std;

void VerificadorDeMultiplos(int y,int x){
   
    if (x%y==0){
    cout<<" sao multiplos, pois a divisao resulta em numero inteiro"<<endl;

    cout<<" o resultado da divisao desses numeros eh: "<<x/y<<endl;

    }else{
    cout<<" nao sao multiplos, pois a divisao nao gera um numero inteiro "<<endl;


    }
    

}

int main (){
    
    
   
int x=0;
 cout<<" informe x: ";
 cin>>x;
  
int y=0;
   cout<<" informe y: ";
   cin>>y;

VerificadorDeMultiplos(y,x);


 

    return 0;
}

