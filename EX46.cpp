#include <iostream>
using namespace std;
float PrecoDeUmaContaDeLuz(float preco, float kw){
    if(kw <=100){
        cout<<" 0.5 por kw "<<endl;
        preco= kw*0.5;
        return preco;

    }else if(kw>100 && kw<200){
        cout<<" 0.75 por kw "<<endl;
        preco=kw*0.75;
        return preco;

    }else if(kw>200 && kw<250){
        cout<<" 1.2 por kw "<<endl;
        preco=kw*1.2;
        return preco;

    }else if(kw>=250){
        cout<<" 1.5 por kw "<<endl;
        preco=kw*1.5;
        return preco;



    }




}
float PrecofinalDaContaDeLuz(float preco, float kw,float precofinal){

precofinal=0;
precofinal=PrecoDeUmaContaDeLuz(preco,kw)*1.2;//impostos

cout<<" o preco final da conta eh (impostos adicionados): "<<precofinal<<endl;//COM OS IMPOSTOS


return precofinal;

}

int main(){

cout<<"--- Este programa calcula a sua conta de luz---"<<endl;

float kw=0;
cout<<" qual eh a quantidade de kw utilizada?: ";
cin>>kw;

float preco;
float precofinal;

PrecofinalDaContaDeLuz(preco, kw,precofinal);







}