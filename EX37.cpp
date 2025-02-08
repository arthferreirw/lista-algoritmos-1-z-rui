#include <iostream>
using namespace std;
float CalcularMediaPonderada(float n1, float n2, float n3, float mediaponderada){

    if(n3>n1 && n3>n2){

    mediaponderada=((n1*3)+(n2*3)+(n3*4))/(10);
    
    return mediaponderada;

    } 

    if(n1>n2 && n1>n3){

    mediaponderada=((n1*4)+(n2*3)+(n3*3))/(10);

    return mediaponderada;

    }

    if(n2>n1 && n2>n3){

    mediaponderada=((n1*3)+(n2)*4+(n3*3))/(10);

    return mediaponderada;

    }

   

    
}
int main(){

float n1=0;
cout<<"N1: ";
cin>>n1;

float n2=0;
cout<<" N2: ";
cin>>n2;

float n3=0;
cout<<" N3: ";
cin>>n3;

float mediaponderada;

CalcularMediaPonderada(n1,n2,n3,mediaponderada);

if(CalcularMediaPonderada(n1,n2,n3,mediaponderada)>=90){

    cout<<" Conceito A "<<endl;

    cout<<"A media eh: "<<CalcularMediaPonderada(n1,n2,n3,mediaponderada)<<endl;


}else if(CalcularMediaPonderada(n1,n2,n3,mediaponderada)>=75 && CalcularMediaPonderada(n1,n2,n3,mediaponderada)<90){    
    cout<<" Conceito B "<<endl;
    cout<<"A media eh: "<<CalcularMediaPonderada(n1,n2,n3,mediaponderada)<<endl;


}else if (CalcularMediaPonderada(n1,n2,n3,mediaponderada)>=60 && CalcularMediaPonderada(n1,n2,n3,mediaponderada)<75){
    cout<<" Conceito C "<<endl;

 cout<<" A media eh: "<<CalcularMediaPonderada(n1,n2,n3,mediaponderada)<<endl;

}else if(60<CalcularMediaPonderada(n1,n2,n3,mediaponderada)){
    cout<<" REPROVADO!!! "<<endl;


}




    return 0;
}


