#include <iostream>
using namespace std;
float CodigoPecas( float valorfinal, float quantidadepeca1, float valoruni1, float quantidadepeca2, float valoruni2){
   
    valoruni1=1500;
    valoruni2=2000;

  
    valorfinal=(valoruni1*quantidadepeca1)+(valoruni2*quantidadepeca2);

    return valorfinal;



}
float PorcentagemAdicional(float ipi){
    float porcentagem=0;
    porcentagem=ipi/(100+1);

    return porcentagem;
}

int main(){
    cout<<"----CODIGO PECA 1----//10001"<<endl;
    cout<<"----CODIGO PECA 2----//10002"<<endl;
    cout<<"----VALOR PECA 1-----//1500 REAIS"<<endl;
    cout<<"----VALOR PECA 2-----//2000 REAIS"<<endl;

    float valorfinal;

    float quantidadepeca1=0;

    cout<<"a quantidade da peca 1 desejada eh: ";
    cin>>quantidadepeca1;
    float quantidadepeca2=0;

    cout<<"a quantidade da peca  2 desejada eh: ";
    cin>>quantidadepeca2;

    float valoruni1;
    float valoruni2;

    float ipi=0;
    cout<<" a porcentagem desejada eh: ";
    cin>>ipi;



    float respostafinal=0;
    respostafinal=CodigoPecas(  valorfinal,  quantidadepeca1,  valoruni1, quantidadepeca2,  valoruni2)* PorcentagemAdicional(ipi);

    cout<<"o valor a ser pago eh: "<<respostafinal<<endl;


    return 0;
}

