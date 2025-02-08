#include <iostream>
using namespace std;
float ComparadorDeNumeros(float a,float b,float c){
      float comparar;
       if (a>b){
        comparar=a;

       }else{

       comparar=b;

       if(a>c){

      comparar=a;



       }else{

        comparar=c;


       }
       if (b>c){

       comparar=b;

    
       }else{

       comparar=c;


       }



       }
     



    return comparar;
}

  int main (){

   float a=0;
   cout<<" defina o valor para a: ";
   cin>>a;

   float b=0;
   cout<<" defina o valor para b: ";
   cin>>b;


float c=0;
   cout<<" defina o valor para c: ";
   cin>>c;

float maiornumero=0;
maiornumero=ComparadorDeNumeros( a, b, c);

cout<<" o maior numero eh: "<<maiornumero<<endl;

    return 0;
  }