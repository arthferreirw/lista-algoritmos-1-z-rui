#include <iostream>
using namespace std;

float FuncaoSegundos(int x){


   float segundos=0;
    segundos=x;
    return segundos;
}
float FuncaoSegundosParaHoras(int x){ 
     int horas=0;
     horas=x/3600;
    return horas;

}
float FuncaoSegundosParaMinutos(int x){
   float minutos=0;
   minutos=x/60;

    return minutos;
}
int main(){

float x=0;
cout<<" Defina o valor de x: ";
cin>>x;
  
  FuncaoSegundos(x);//segundos
  FuncaoSegundosParaHoras(x);//horas
  FuncaoSegundosParaMinutos(x);//minutos

  cout<<" O evento possui uma duracao de "<<FuncaoSegundos(x)<<" segundos "<< FuncaoSegundosParaHoras(x)<<" horas "<<FuncaoSegundosParaMinutos(x)<<" minutos "<<endl;

  






    return 0;
}