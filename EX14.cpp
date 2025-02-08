#include <iostream>
using namespace std;
int CalculaTempoJogo(float inicio,float fim){
    int tempo=0;
    
    if(fim<=24){
      tempo=fim-inicio;

    }else{
    cout<<" Erro: ultrapassou o numero de horas "<<endl;

    }
    if (inicio==fim){
      cout<<" O tempo inicial nao pode ser igual ao tempo final  "<<endl;

    }else{



        
    }




    return tempo;
}
int main (){
float inicio=0;
cout<<" Defina o tempo inicial do jogo (0-24): ";
cin>>inicio;

float fim=0;
cout<<" defina o tempo final do jogo (0-24): ";
cin>>fim;

float tempojogo=0;
tempojogo=CalculaTempoJogo( inicio, fim);

cout<<" O tempo de duracao do jogo eh: "<<tempojogo<<" horas "<<endl;




    return 0;
}