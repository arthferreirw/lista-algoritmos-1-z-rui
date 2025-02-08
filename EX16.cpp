#include <iostream>
using namespace std;
int TrocadorNumero(int a,int b){
    int trocador;
    if (a>b){
   
    cout<<"O valor de a eh maior que b "<<endl;

    }else{
     cout<<"informe um novo valor para que (a) seja maior que b: ";
     cin>>b;
     
    }

    return trocador;
}
int main (){
    int a=0;
    cout<<" informe o valor de a: ";
    cin>>a;

    int b=0;
    cout<<" informe o valor de b: ";
    cin>>b;
    
    TrocadorNumero( a,b);


    return 0;
}
