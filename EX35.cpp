#include <iostream>
using namespace std;
float CalcularMediaAritmetica(float x1, float x2, float x3){
    float mediaritmetica=0;

    mediaritmetica=(x1+x2+x3)/3;


    return mediaritmetica;
}
float CalcularMediaPonderada(float x1, float x2, float x3){
    float mediaponderada=0;

    mediaponderada=((x1*3+x2*3+x3*4))/10;



    return mediaponderada;
}

float CalcularMediaHarmonica(float x1, float x2, float x3){
    float mediaharmonica=0;
    mediaharmonica=3/((1/x1)+(1/x2)+(1/x3));




    return mediaharmonica;
}
int main(){

    float x1=0;
    cout<<" defina x1 : ";
    cin>>x1;

    float x2=0;
    cout<<" defina x2 : ";
    cin>>x2;

    float x3=0;
    cout<<" defina x3 3: ";
    cin>>x3;

    string media;
    cout<<"Digite qual media voce deseja utilizar (ma/mp/mh): ";
    cin>>media;
  
    if( media=="ma"){

    cout<<" o valor da media aritmetica eh: "<<CalcularMediaAritmetica(x1,x2,x3)<<endl;


    }else if( media=="mp"){

    cout<<" o valor da media ponderada eh: "<<CalcularMediaPonderada(x1,x2,x3)<<endl;


    }else if(media=="mh"){

    cout<<" o valor da media harmonica eh: "<<CalcularMediaHarmonica(x1,x2,x3)<<endl;





    }

    CalcularMediaAritmetica( x1, x2, x3);

    CalcularMediaPonderada(x1,x2,x3);
    
    CalcularMediaHarmonica(x1,x2,x3);


    



    return 0;
}