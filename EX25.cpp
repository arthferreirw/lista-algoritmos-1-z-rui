#include <iostream>
#include <math.h>
using namespace std;
bool SomaDosAngulosInternosTriangulo(int a,int b,int c){
      bool somaangulos=true;
       cout<<" true"<<endl;
      if(a+b+c==180) {
       somaangulos=false;
       cout<<" false "<<endl;

      }


  return somaangulos;
}

int main(){

int a=0;
cout<<" A: ";
cin>>a;

int b=0;
cout<<" B: ";
cin>>b;

int c=0;
cout<<" C: ";
cin>>c;

SomaDosAngulosInternosTriangulo( a, b, c);
    return 0;
}