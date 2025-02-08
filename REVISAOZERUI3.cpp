#include <iostream>

using namespace std;

void AumentoSalarial(){
    float salario_inicial=0.0;
    cout<<" informe o salario inicial: R$ ";
    cin>>salario_inicial;

    float novo_salario=0.0;
    double aumento=1.5;
    int anoatual=0.0;
    cout<<" informe o ano atual: ";
    cin>>anoatual;
    for(int ano=1996; ano<=anoatual; ano=ano+1){
        novo_salario=(salario_inicial*aumento/100)+salario_inicial; 
       aumento=aumento*2;
    }
    cout<<" o salario atual do funcionario eh: R$ "<<novo_salario<<endl;

}
int main (){

    AumentoSalarial();






    return 0;
}