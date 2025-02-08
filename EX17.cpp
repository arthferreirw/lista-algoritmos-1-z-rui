#include <iostream>
using namespace std;
float VerificarModulo(float a){
    int verificador;
    if (a>0){
     cout<<" Esse numero eh positivo "<<endl;

    }else{
        cout<<" esse numero eh negativo "<<endl;

    }


    return verificador;
}
int main (){
   float a=0;

   cout<<" Informe o valor de a (positivo ou negativo): ";
   cin>>a;

  float verificando=0;
  verificando=VerificarModulo(a);

    return 0;
}