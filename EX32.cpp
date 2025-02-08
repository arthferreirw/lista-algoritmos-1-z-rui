#include <iostream>
#include <math.h>
using namespace std;
int CalculeDelta(int a, int b, int c){

    int delta=0;
    delta=b*b-4*a*c;




   return delta;
}
int CalculeRaizUm(int a, int b, int c){
    int raizum=0;
    raizum= (-b  + sqrt(CalculeDelta(a,b,c)))/(2*a);



   return raizum;
}

int CalculeRaizDois(int a, int b, int c){

    int raizdois=0;
    raizdois= (-b - sqrt(CalculeDelta(a,b,c)))/(2*a);


   return raizdois;
}

int main(){





    int a=0;
    cout<<"Defina o valor de a: ";
    cin>>a;

    int b=0;
    cout<<" Defina o valor de b: ";
    cin>>b;

    int c=0;
    cout<<" Defina o valor de c: ";
    cin>>c;


    cout<<" o valor de delta eh: "<<CalculeDelta(a,b,c)<<endl;

    cout<<" O valor da raiz um eh: "<< CalculeRaizUm(a,b,c)<<endl<<" o valor da raiz dois eh: "<<CalculeRaizDois(a,b,c)<<endl;



    return 0;
}

