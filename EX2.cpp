#include <iostream>

using namespace std;

float MontadoraDePecas( ){
    float codigox=0.0;
    float valorunitariox=0.0;
    float quantidadex=0.0;
    float totalx=0.0;
    float totalxcomimposto=0.0;

    
    
 
    float codigoy=0.0;
    float valorunitarioy=0.0;
    float quantidadey=0.0;
    float totaly=0;
    float totalycomimposto=0.0;
    float imposto=0.0;
    float totalvalorpago=0.0;
    totalvalorpago=totalxcomimposto+totalycomimposto;

    cout<<" informe o codigo da peca x: ";
    cin>>codigox;

    cout<<" informe o valor unitario da peca x: R$ ";
    cin>>valorunitariox;

    cout<<" informe a quantidade da peca x:  ";
    cin>>quantidadex;


    cout<<" informe o codigo da peca y: ";
    cin>>codigoy;

    cout<<" informe o valor unitario da peca y: R$ ";
    cin>>valorunitarioy;

    cout<<" informe a quantidade da peca y: ";
    cin>>quantidadey;

    cout<<" informe o imposto (IPI): ";
    cin>>imposto;

    if(codigox){
        cout<<"CODIGO PECA: "<<codigox<<endl;
        totalx=quantidadex*valorunitariox;
        totalxcomimposto=totalx*(1+imposto);
        cout<<" o total em R$ a pagar pela peca X eh: "<<totalxcomimposto<<endl;
    }
    if (codigoy){
        cout<<" CODIGO PECA: "<<codigoy<<endl;
        totaly=quantidadey*valorunitarioy;
        totalycomimposto=totaly*(1+imposto);

        cout<<" o total em R$ a pagar pela peca Y eh: "<<totalycomimposto<<endl;
    }
    totalvalorpago=totalxcomimposto+totalycomimposto;
    cout<<" o total  a ser pago pelas duas pecas: R$ "<<totalvalorpago<<endl;


}
int main (){
   MontadoraDePecas();







    return 0;
}