#include <iostream>

using namespace std;

void ImprimirNumerosPares(){
    int n=0;
    cout<<" N: ";
    cin>>n;
    if(n%2==0){
        cout<<" N eh par! "<<endl;
    }else{
        cout<<" informe um numero (n) par! "<<endl;
        cout<<" N: ";
        cin>>n;

    }

    for(int i=0; i<=n; i=i+2){
        cout<<i<<" , ";
    }

}
void ImprimirNumerosImpares(){
    int n=0;
    cout<<" N: ";
    cin>>n;
    if(n%2==0){
        cout<<" N eh par! "<<endl;
        cout<<" informe um numero (n) Impar! "<<endl;
        cout<<" N: ";
        cin>>n;
    }else{
        cout<<" N eh impar! "<<endl;

    }

    for(int i=1; i<=n; i=i+2){
        cout<<i<<" ,";
    }

}
int main (){
    int opcao=0;
    cout<<" selecione opcao 1 caso queira ver a sequencia de numeros impares ou selecione opcao 2 para ver a sequencia de numeros pares:  ";
    cin>>opcao;

    switch(opcao){

        case 1:
        ImprimirNumerosImpares();
        break;

        case 2:
        ImprimirNumerosPares();
        break;
        
        default:
        cout<<" Opcao invalida "<<endl;
        break;


    }






    return 0;
}