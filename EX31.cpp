#include <iostream>
using namespace std;
void CategorizarNadadores(int idade){
  
   if(idade<=7 && idade<5){
    cout<<" Infantil A "<<endl;

   }
   if(idade>=8 && idade<=10){
    cout<<" Infatil B "<<endl;
   }

    if(idade>=11 && idade<=13){
    cout<<" Juvenil A "<<endl;
     
   }

   if(idade>=14 && idade<=17){
    cout<<" Juvenil B "<<endl;
   }

   if (idade>=18){
    cout<<" Adulto "<<endl;
   }
   

   
   
   }
  
 

int main (){
   int idade=0;
   cout<<" Qual eh a sua idade, nadador? (5-18) ";
   cin>>idade;

  
   CategorizarNadadores(idade);

    return 0;
}
