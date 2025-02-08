#include <iostream>
using namespace std;
void DiaDaSemana(int dia){
    if(dia==1){

    cout<<" Domingo "<<endl;

    }else if(dia==2){

    cout<<" Segunda-feira "<<endl;

    }else if(dia==3){
    cout<<" Terca-feira "<<endl;     


    }else if(dia==4){
    cout<<" Quarta-feira "<<endl;         


    }else if(dia==5){
    cout<<"Quinta-feira "<<endl;  


    }else if(dia==6){
    cout<<"Sexta-feira "<<endl; 


    }else if(dia==7){
    cout<<" Sabado "<<endl;


    }else if(dia>7){

    cout<<" Dia da semana invalido "<<endl;



    }
    

}
int main(){

int dia=0;
cout<<" Defina o dia da semana (numero): ";
cin>>dia;

    DiaDaSemana(dia);

    return 0;
}