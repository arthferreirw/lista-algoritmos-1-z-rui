#include <iostream> 
using namespace std;
int CalculoIMC(float peso, float altura){

    float imc=0;
    imc=peso/((altura)*(altura));


    return imc;
}

int main(){
cout<<"----- Esse programa calcula o seu IMC-----"<<endl;

float peso=0;
cout<<" qual eh o seu peso (kg):  ";
cin>>peso;

float  altura=0;
cout<<" qual eh a sua altura (m):  ";
cin>>altura;

CalculoIMC(peso,altura);

cout<<" o IMC eh: "<<CalculoIMC(peso,altura)<<endl;

if(CalculoIMC(peso,altura)<16){
    cout<<" Magreza grave "<<endl;


}else if(CalculoIMC(peso,altura)>=16 && CalculoIMC(peso,altura)<17){
    cout<<" Magreza moderada "<<endl;

}else if(CalculoIMC(peso,altura)>=17 && CalculoIMC(peso,altura)<18.5){
    cout<<" Magreza leve "<<endl;


}else if(CalculoIMC(peso,altura)>=18.5 && CalculoIMC(peso,altura)<25){
    cout<<" Saudavel "<<endl;


}else if(CalculoIMC(peso,altura)>=25 && CalculoIMC(peso,altura)<30){
    cout<<" Sobrepeso "<<endl;


}else if(CalculoIMC(peso,altura)>=30 && CalculoIMC(peso,altura)<35){
    cout<<" Obesidade grau um "<<endl;



}else if(CalculoIMC(peso,altura)>=35 && CalculoIMC(peso,altura)<40){
 cout<<" Obesidade grau dois (severa) "<<endl;


}else if(CalculoIMC(peso,altura)>=40){
    cout<<" Obesidade grau 3 (morbida) "<<endl;


}

int BrutusIMC=0;
BrutusIMC=CalculoIMC(122,1.84);

int PercaBrutus=0;
PercaBrutus=((BrutusIMC-12))*((altura*altura));

cout<<" Brutus precisa perder : "<<PercaBrutus<<" kg "<<endl;

int OliviaIMC=0;
OliviaIMC=CalculoIMC(45,1.76);

int GanhoOlivia=0;
GanhoOlivia=((18.5-OliviaIMC))*((altura*altura));

cout<<" Olivia precisa ganhar "<<GanhoOlivia<<" kg "<<endl;








    return 0;
}