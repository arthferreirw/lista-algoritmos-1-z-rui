#include <iostream>
#include <math.h>
using namespace std;
int VerificadorParAouB(int a,int b){
    int verificador;
    if (a%2==0){
     cout<<" a eh par "<<endl;


    }else if(b%2==0){

     cout<<" b eh par "<<endl;

    }




    return verificador;
}

int main () {

int a=0;
cout<<" Defina o valor de a: ";
cin>>a;

int b=0;
cout<<" Defina o valor de b: ";
cin>>b;
 
VerificadorParAouB(a,b);

    return 0;
}