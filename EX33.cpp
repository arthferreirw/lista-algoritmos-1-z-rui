#include <iostream>
using namespace std;
float CalcularPesoIdeal(float altura, float pesoideal,string sexo){
if(sexo=="m"){

   pesoideal=(72.7*altura)-58;
   cout<<" o seu peso ideal masculino eh: "<<pesoideal<<endl;

}else{
   pesoideal=(62.1*altura)-58;
   cout<<" o seu peso ideal feminino eh: "<<pesoideal<<endl;

    
}

return pesoideal;

}
int main(){

    float altura=0;
    cout<<" qual eh a sua altura (m)?: ";
    cin>>altura;

    string sexo;
    cout<<" qual eh o seu sexo? (m/f): ";
    cin>>sexo;

    float pesoideal;
    CalcularPesoIdeal(altura,pesoideal,sexo);
   

    return 0;
}
