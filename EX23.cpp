#include <iostream>
#include <math.h>
using namespace std;

int VerificaPar(int a, int b){
    int verificador=0;
    if(a,b%2==0){
    cout<<" A e b sao numeros pares "<<endl;



    }else{

     cout<<" A e b nao sao numeros pares "<<endl;

    }
    

    return verificador;
}

int main (){
 
    int a=0;
    cout<<" Defina o valor de a: ";
    cin>>a;

    int b=0;
    cout<<" Defina o valor de b: ";
    cin>>b;

    VerificaPar(a,b);


    return 0;
}