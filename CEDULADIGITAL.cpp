#include <iostream>

using namespace std;
void CedulaDigital(){
    cout<<" 1 - Candidato A "<<endl;
    cout<<" 2 - Candidato B "<<endl;
    cout<<" 3 - Candidato C "<<endl;
    cout<< " 5 - Votos nulos "<<endl;
    cout<<" 6 - Votos em branco "<<endl;
    cout<<" 0 - Sair "<<endl;
    cout<<"---------"<<endl;
    int totalvotosA=0;
    int totalvotosB=0;
    int totalvotosC=0;
    float  totalvotosnulo, votosembranco, totalvotos;
    int opcao=0;
    totalvotosnulo=0;
    votosembranco=0;
    totalvotos=0;
    float percentagem_votosnulo_totaldevotos=0.0;
    float percentagen_votosembranco_totalvotos=0.0;
    do{
        cout<<" informe a opcão do seu voto: ";
        cin>>opcao;
        
        if(opcao==1){
            totalvotosA++;
        }
        if(opcao==2){
            totalvotosB++;
        }
        if(opcao==3){
            totalvotosC++;
        }
        if(opcao==5){
            totalvotosnulo++;
        }
        if(opcao==6){
            votosembranco++;
        }
    
}while(opcao>0);

cout<<" votos no canditado A: "<<totalvotosA<<endl;
cout<<" votos no canditado B: "<<totalvotosB<<endl;
cout<<" votos no canditado C: "<<totalvotosC<<endl;
cout<< "votos nulo: "<<totalvotosnulo<<endl;
cout<<" votos em branco: "<<votosembranco<<endl;

percentagem_votosnulo_totaldevotos=(totalvotosnulo/totalvotos)*100;
percentagen_votosembranco_totalvotos=(votosembranco/totalvotos)*100;

cout<<" percentagem votos nulo sobre total de votos: "<<percentagem_votosnulo_totaldevotos<<"%"<<endl;

cout<<" percentagem votos em branco sobre total de votos: "<<percentagen_votosembranco_totalvotos<<"%"<<endl;
}
int main (){
    CedulaDigital();
    
    
    
    
    
    
    
    
    
    
    return 0;
}