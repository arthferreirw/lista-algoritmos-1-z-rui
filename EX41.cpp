//tiver que converter o numero 0987(decimal) para octal (1733) e depois adicionei o "0 " a frente



#include <iostream> 
using namespace std;
float CalcularPrecoProduto(float quantidade, float codigo, float precototal){
    if(codigo == 1001){

    precototal=quantidade*5.32;

    return precototal;

    }else if(codigo == 1324){

    precototal=quantidade*6.45;

    return precototal;


    }else if(codigo == 6548){

    precototal=quantidade*2.37;

    return precototal;

    }else if(codigo == 01733 ){

    precototal=quantidade*5.32;

    return precototal;

    }else if(codigo == 7623){

    precototal=quantidade*6.45; 

    return precototal;


    }

}

int main(){

    cout<<"------PRECO DOS PRODUTOS-----"<<endl;
    cout<<" PRODUTO------ PRECO UNITARIO "<<endl;
    cout<<" 1001   ------ 5.32 "<<endl;
    cout<<" 1324   ------ 6.45 "<<endl;
    cout<<" 6548   ------ 2.37 "<<endl;
    cout<<" 0987   ------ 5.32 "<<endl;
    cout<<" 7623   ------ 6.45 "<<endl;


float codigo;
cout<<" digite o codigo do produto: ";
cin>>codigo;


float quantidade=0;   
cout<<" qual eh a quantidade do produto desejada?: ";
cin>>quantidade;





float precototal;

CalcularPrecoProduto(quantidade,codigo,precototal);



cout<<" PRODUTO------ PRECO UNITARIO "<<endl;
cout<<" 1001   ------ 5.32 "<<endl;
cout<<" 1324   ------ 6.45 "<<endl;
cout<<" 6548   ------ 2.37 "<<endl;
cout<<" 0987   ------ 5.32 "<<endl;
cout<<" 7623   ------ 6.45 "<<endl;


cout<<" o preco total eh: "<<CalcularPrecoProduto(quantidade,codigo,precototal)<<endl;






return 0;
}






