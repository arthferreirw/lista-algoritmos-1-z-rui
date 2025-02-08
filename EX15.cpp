#include <iostream>
using namespace std;
float CustoConsumidor (float cf ){
 float custofabrica=0;
  custofabrica=cf*0.45+0.28*cf;   

return custofabrica;
}
int  main (){
float cf=0;
cout<<" Digite o custo de fabrica: ";
cin>>cf;

float custofinal=0;
custofinal=CustoConsumidor ( cf );

cout<<" O custo do consumidor eh de: "<<custofinal<<endl;



    return 0;
}