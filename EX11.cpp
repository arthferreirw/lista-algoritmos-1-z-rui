#include <iostream>

using namespace std;
float quadrado(float x,float y){

      float resp=0;
    
      resp=x*x+y*y;

    return resp;
}
int restante(float x, float y){

     float resp2=0;
     
     resp2=6*x*y;

    return resp2;
}
int main(){

float x=0;
cout<<" Defina o valor de x: ";
cin>>x;

float y=0;
cout<<" Defina o valor de y: ";
cin>>y;

float respfinal=0;
 respfinal= quadrado( x,y)-restante( x,y)-1;

cout<<" a imagem  da funcao eh: "<<respfinal<<endl;


    return 0;
}