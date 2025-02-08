#include <iostream>
using namespace std;
int MediaPonderada(float n1,float n2,float n3){
     float nota=0;
     nota=n1*2+n2*3+n3*5;

    return nota;
}
int divisaoMediaResultadoFinal(float n1,float n2,float n3){
    float final=0;
     final=MediaPonderada (n1, n2, n3)/10;

    return final;
}

int main (){

float n1=0;
cout<<" Qual o valor de n1: ";
cin>>n1;

float n2=0;
cout<<" Qual o valor de n2: ";
cin>>n2;

float n3=0;
cout<<" Qual o valor de n3: ";
cin>>n3;

float resp=0;
resp=divisaoMediaResultadoFinal( n1, n2, n3);

cout<<"a media ponderada eh: "<<resp<<endl;


    return 0;
}