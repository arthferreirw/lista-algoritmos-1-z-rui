#include <iostream>
using namespace std;
void IndicePoluicao(float indice){
   if(indice>=0.05 && indice <=0.25){
        cout<<" INDICE SAUDAVEL "<<endl;



   }
   if(indice >= 0.3 && indice <= 0.4){
    cout<<" ALERTAR GRUPO 1 "<<endl;


   }
   if(indice >= 0.4 && indice <=0.5){
    cout<<" ALERTAR GRUPO 1 E 2  "<<endl;



   }
   if (indice >=0.5){
    cout<<" ALERTAR GRUPO 1, 2 E 3  "<<endl;

   }
}
int main(){

float indice=0;
cout<<" informe o indice de poluicao: ";
cin>>indice;

IndicePoluicao(indice);




    return 0;
}